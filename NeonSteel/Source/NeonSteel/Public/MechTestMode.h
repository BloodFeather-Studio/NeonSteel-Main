#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MechTestMode.generated.h"

class APlayerMech;
class APilotCharacter;

/**
 * Manages the game's rules, including the spawning and tracking of the persistent pilot and mech.
 */
UCLASS()
class NEONSTEEL_API AMechTestMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMechTestMode();

	/** Returns the single instance of the mech that exists in the world. */
	APlayerMech* GetWorldMech() const;

	/** Sets the game mode's reference to the world mech. */
	void SetWorldMech(APlayerMech* NewMech);

	/** Returns the single instance of the pilot that exists in the world. */
	APilotCharacter* GetWorldPilot() const;

	/** Sets the game mode's reference to the world pilot. Called by the pilot on BeginPlay. */
	void SetWorldPilot(APilotCharacter* NewPilot);

	/** Returns the Blueprint class used to spawn the mech. */
	TSubclassOf<APlayerMech> GetMechClass() const;

	/** The Blueprint of the PlayerMech to spawn at the start of the game. Must be set in BP_MechTestMode. */
	UPROPERTY(EditDefaultsOnly, Category = "Mech")
	TSubclassOf<APlayerMech> MechClass;

protected:
	/** Overridden from AGameModeBase. Called when the game starts. */
	virtual void StartPlay() override;

private:
	/** A direct pointer to the single mech instance in the world for persistence. */
	UPROPERTY()
	APlayerMech* WorldMech;

	/** A direct pointer to the single pilot instance in the world for persistence. */
	UPROPERTY()
	APilotCharacter* WorldPilot;
};

