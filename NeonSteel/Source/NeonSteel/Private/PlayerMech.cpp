#include "PlayerMech.h"
#include "PilotCharacter.h"
#include "MechTestMode.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Engine.h"
#include "Engine/DamageEvents.h"
#include "Animation/AnimInstance.h"

// Constructor: Sets up components and default values.
APlayerMech::APlayerMech()
{
	// Configure character size and movement
	GetCapsuleComponent()->InitCapsuleSize(80.f, 180.0f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->AirControl = 0.2f;

	// Create and configure the camera spring arm
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bUsePawnControlRotation = true;

	// Create and configure the follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// Initialize Health
	CurrentHealth = MaxHealth;
}

// Called when the game starts or when the actor is spawned.
void APlayerMech::BeginPlay()
{
	Super::BeginPlay();

	// Set configurable values from properties
	CameraBoom->TargetArmLength = CameraBoomLength;
	GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
	GetCharacterMovement()->JumpZVelocity = JumpHeight;
	CurrentHealth = MaxHealth; // Ensure health is full at start

	// Store all original materials so we can restore them after a damage flash
	if (USkeletalMeshComponent* MeshComponent = GetMesh())
	{
		OriginalMaterials.Empty();
		for (int32 i = 0; i < MeshComponent->GetNumMaterials(); ++i)
		{
			OriginalMaterials.Add(MeshComponent->GetMaterial(i));
		}
	}
}

// Called when a player controller takes control of this character.
void APlayerMech::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	// Add our Input Mapping Context to the player's subsystem
	if (APlayerController* PlayerController = Cast<APlayerController>(NewController))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

// Called when a player controller gives up control of this character.
void APlayerMech::UnPossessed()
{
	Super::UnPossessed();
	// Remove our Input Mapping Context from the player's subsystem
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(DefaultMappingContext);
		}
	}
}

// Called every frame
void APlayerMech::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Binds functions to the player's input actions.
void APlayerMech::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerMech::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerMech::Look);
		EnhancedInputComponent->BindAction(DemechAction, ETriggerEvent::Triggered, this, &APlayerMech::Scuttle);
	}
}

// Handles all incoming damage for the mech.
float APlayerMech::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	const float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	if (ActualDamage > 0.f)
	{
		CurrentHealth -= ActualDamage;

		// Trigger the visual damage flash effect
		if (USkeletalMeshComponent* MeshComponent = GetMesh(); MeshComponent && DamageFlashMaterial)
		{
			// Apply the flash material to all material slots
			for (int32 i = 0; i < MeshComponent->GetNumMaterials(); ++i)
			{
				MeshComponent->SetMaterial(i, DamageFlashMaterial);
			}
			// Set a timer to call ResetMaterial after a short delay
			GetWorld()->GetTimerManager().SetTimer(FlashTimerHandle, this, &APlayerMech::ResetMaterial, 0.2f, false);
		}

		// Check if the mech has been destroyed
		if (CurrentHealth <= 0.f)
		{
			EjectPilot();
		}
	}
	return ActualDamage;
}

// Resets the mech's health to full.
void APlayerMech::RestoreHealth()
{
	CurrentHealth = MaxHealth;
}

// Makes the mech visible and active in the world.
void APlayerMech::Activate()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
}


// Hides and disables the mech.
void APlayerMech::Deactivate()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);
}

// Called by a timer to revert the materials after a damage flash.
void APlayerMech::ResetMaterial()
{
	if (USkeletalMeshComponent* MeshComponent = GetMesh())
	{
		// Loop through the stored original materials and re-apply them
		for (int32 i = 0; i < OriginalMaterials.Num(); ++i)
		{
			if (MeshComponent->GetNumMaterials() > i)
			{
				MeshComponent->SetMaterial(i, OriginalMaterials[i]);
			}
		}
	}
}

// Handles forward/backward and right/left movement input.
void APlayerMech::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

// Handles mouse look input.
void APlayerMech::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

// Applies self-damage when the de-mech key is pressed.
void APlayerMech::Scuttle(const FInputActionValue& Value)
{
	// Apply the configurable damage amount to self
	TakeDamage(ScuttleDamage, FDamageEvent(), GetController(), this);
}

// Manages the process of exiting the mech.
void APlayerMech::EjectPilot()
{
	// Get references to the world, player controller, and game mode
	UWorld* World = GetWorld();
	APlayerController* PC = Cast<APlayerController>(GetController());
	AMechTestMode* GameMode = World ? World->GetAuthGameMode<AMechTestMode>() : nullptr;
	if (!World || !PC || !GameMode) return;

	// Ask the game mode for the persistent pilot instance
	APilotCharacter* Pilot = GameMode->GetWorldPilot();
	if (!Pilot) return;

	// Calculate the spawn position for the pilot (behind the mech)
	const FVector SpawnLocation = GetActorLocation() - (GetActorForwardVector() * 150.0f) + FVector(0, 0, 50.f);
	const FRotator SpawnRotation = GetActorRotation();

	// Move the pilot to the spawn location and activate them
	Pilot->SetActorLocationAndRotation(SpawnLocation, SpawnRotation);
	Pilot->Activate();

	// Transfer player control from the mech back to the pilot.
	// We call UnPossess() on the controller to make it release this pawn.
	PC->UnPossess();
	PC->Possess(Pilot);

	// Deactivate the mech instead of destroying it
	Deactivate();

	// Tell the now-active pilot to perform the launch for a reliable physics effect
	Pilot->PerformEjectionLaunch(GetActorForwardVector());
}

