#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PilotCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class APlayerMech;
class AMechTestMode;
struct FInputActionValue;

/**
 * Represents the player-controlled character when not inside the mech.
 */
UCLASS(config = Game)
class APilotCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APilotCharacter();

	/** Applies a physics impulse to launch the character, typically upon ejection. */
	void PerformEjectionLaunch(const FVector& MechForwardDirection);

	/** Makes the pilot visible, enables collision, and allows them to be ticked. */
	void Activate();

	/** Hides the pilot, disables collision, and stops them from being ticked. */
	void Deactivate();

	// --- CONFIGURABLE PROPERTIES ---
protected:

	// --- CAMERA ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pilot Settings|Camera")
	float CameraBoomLength = 400.0f;

	// --- MOVEMENT ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pilot Settings|Movement")
	float JumpHeight = 600.f;

	// --- EJECTION ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pilot Settings|Ejection")
	float EjectionBackwardForce = 1200.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pilot Settings|Ejection")
	float EjectionUpwardForce = 600.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pilot Settings|Ejection")
	float CollisionReenableDelay = 0.3f;

	// --- CORE LOGIC ---
protected:

	/** Called when the game starts or when spawned. */
	virtual void BeginPlay() override;

	/** Called when a controller possesses this pawn. */
	virtual void PossessedBy(AController* NewController) override;

	/** Called when a controller un-possesses this pawn. */
	virtual void UnPossessed() override;

	// --- INPUT ACTIONS ---

	/** The Input Mapping Context to use for the pilot. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* DefaultMappingContext;

	/** Input Action for jumping. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* JumpAction;

	/** Input Action for moving forward/back and right/left. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	/** Input Action for looking around with the mouse. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Iut)
	UInputAction* LookAction;

	/** Input Action for summoning the mech. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* SummonMechAction;

	/** Handles move input. */
	void Move(const FInputActionValue& Value);

	/** Handles look input. */
	void Look(const FInputActionValue& Value);

	/** Handles the logic for entering the mech. */
	void SummonMech(const FInputActionValue& Value);

public:
	/** Binds input actions to functions. */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	/** Spring arm for the camera, responsible for distance and collision. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** The camera the player sees through. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	/** Timer handle for re-enabling collision after ejection. */
	FTimerHandle CollisionReenableTimer;

	/** Function called by a timer to re-enable capsule collision after being launched. */
	void ReEnableCollision();
};

