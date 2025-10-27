#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PlayerMech.generated.h"

// Forward declarations to avoid circular dependencies
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UMaterialInterface;

UCLASS()
class NEONSTEEL_API APlayerMech : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerMech();

	//~==============================================================================================
	// Gameplay Values - These can be adjusted in the Blueprint editor for easy tweaking.
	//~==============================================================================================

	/** Maximum health of the mech. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mech Stats")
	float MaxHealth = 100.0f;

	/** The amount of damage the 'Scuttle' action deals to the mech. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mech Stats")
	float ScuttleDamage = 25.0f;

	/** The maximum walking speed of the mech. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mech Movement")
	float MaxWalkSpeed = 400.f;

	/** The vertical force of the mech's jump. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mech Movement")
	float JumpHeight = 600.f;

	/** The distance of the camera from the mech. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mech Camera")
	float CameraBoomLength = 800.0f;

	//~==============================================================================================
	// Core Gameplay Functions
	//~==============================================================================================

	/** Makes the mech visible and active in the world. */
	void Activate();

	/** Hides and disables the mech. */
	void Deactivate();

	/** Resets the mech's health to full. Called when the pilot summons the mech. */
	void RestoreHealth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when a player controller takes control of this character
	virtual void PossessedBy(AController* NewController) override;

	// Called when a player controller gives up control of this character
	virtual void UnPossessed() override;

	//~==============================================================================================
	// Input Handling
	//~==============================================================================================

	/** The Input Mapping Context to use for this character. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* DefaultMappingContext;

	/** The Input Action for jumping. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* JumpAction;

	/** The Input Action for moving forward/back and right/left. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	/** The Input Action for looking around with the mouse. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;

	/** The Input Action for the de-mech/scuttle sequence. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* DemechAction;

	/** The material to apply briefly when the mech takes damage. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mech Effects")
	UMaterialInterface* DamageFlashMaterial;

	/** Handles forward/backward and right/left movement input. */
	void Move(const FInputActionValue& Value);

	/** Handles mouse look input. */
	void Look(const FInputActionValue& Value);

	/** Applies self-damage when the de-mech key is pressed. */
	void Scuttle(const FInputActionValue& Value);

	/** Manages the process of exiting the mech. */
	void EjectPilot();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Overridden from AActor to handle incoming damage. */
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser) override;

private:
	//~==============================================================================================
	// Components
	//~==============================================================================================

	/** The spring arm that positions the camera behind the character. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** The camera that follows the character. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	//~==============================================================================================
	// Internal State
	//~==============================================================================================

	/** The current health of the mech. */
	float CurrentHealth;

	/** A timer handle for managing the damage flash effect. */
	FTimerHandle FlashTimerHandle;

	/** An array to store the mech's original materials so they can be restored after a damage flash. */
	UPROPERTY()
	TArray<UMaterialInterface*> OriginalMaterials;

	/** Called by a timer to revert the materials after a damage flash. */
	void ResetMaterial();
};

