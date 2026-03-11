#include "PilotCharacter.h"
#include "MechTestMode.h"
#include "PlayerMech.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Engine/Engine.h"

// Constructor: Sets up components and default values.
APilotCharacter::APilotCharacter()
{
	// Configure character size and movement
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
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
}

// Called when the game starts or when the actor is spawned.
void APilotCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set configurable values from properties
	CameraBoom->TargetArmLength = CameraBoomLength;
	GetCharacterMovement()->JumpZVelocity = JumpHeight;

	// Register this pilot instance with the game mode so it can be found later
	if (AMechTestMode* GameMode = GetWorld()->GetAuthGameMode<AMechTestMode>())
	{
		GameMode->SetWorldPilot(this);
	}
}

// Called when a player controller takes control of this character.
void APilotCharacter::PossessedBy(AController* NewController)
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
void APilotCharacter::UnPossessed()
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

// Binds functions to the player's input actions.
void APilotCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APilotCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APilotCharacter::Look);
		EnhancedInputComponent->BindAction(SummonMechAction, ETriggerEvent::Triggered, this, &APilotCharacter::SummonMech);
	}
}

// Makes the pilot visible and active in the world.
void APilotCharacter::Activate()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
}

// Hides and disables the pilot.
void APilotCharacter::Deactivate()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);
}

// Applies a physics launch for the ejection sequence.
void APilotCharacter::PerformEjectionLaunch(const FVector& MechForwardDirection)
{
	// Temporarily disable collision to prevent getting stuck on the mech
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Calculate launch velocity (backwards and upwards from the mech's orientation)
	const FVector LaunchVelocity = (MechForwardDirection * -1.0f * EjectionBackwardForce) + FVector(0, 0, EjectionUpwardForce);
	LaunchCharacter(LaunchVelocity, true, true);

	// Set a timer to re-enable collision after a short delay
	GetWorld()->GetTimerManager().SetTimer(CollisionReenableTimer, this, &APilotCharacter::ReEnableCollision, CollisionReenableDelay, false);
}

// Called by a timer to restore collision after ejection.
void APilotCharacter::ReEnableCollision()
{
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

// Handles forward/backward and right/left movement input.
void APilotCharacter::Move(const FInputActionValue& Value)
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
void APilotCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

// Handles the logic for summoning and entering the mech.
void APilotCharacter::SummonMech(const FInputActionValue& Value)
{
	// Get references to the world and game mode
	UWorld* World = GetWorld();
	AMechTestMode* GameMode = World ? World->GetAuthGameMode<AMechTestMode>() : nullptr;
	if (!World || !GameMode) return;

	// Ask the game mode for the persistent mech instance
	APlayerMech* WorldMech = GameMode->GetWorldMech();
	if (!WorldMech) return;

	// --- Calculate corrected spawn location ---
	const FVector PilotGroundLocation = GetActorLocation() - FVector(0, 0, GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
	const float MechCapsuleHalfHeight = WorldMech->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	const FVector SpawnLocation = PilotGroundLocation + FVector(0, 0, MechCapsuleHalfHeight);

	// Move the mech to the calculated position, restore its health, and activate it
	WorldMech->SetActorLocation(SpawnLocation);
	WorldMech->SetActorRotation(GetActorRotation());
	WorldMech->RestoreHealth();
	WorldMech->Activate();

	// Transfer player control from the pilot to the mech
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		PC->UnPossess();
		PC->Possess(WorldMech);
		// Deactivate self now that the player is in the mech
		Deactivate();
	}
}

