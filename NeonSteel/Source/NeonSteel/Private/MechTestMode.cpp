#include "MechTestMode.h"
#include "PilotCharacter.h"
#include "PlayerMech.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

// Constructor: Initializes default values for the game mode.
AMechTestMode::AMechTestMode()
{
	// Set the default pawn class to our custom pilot character.
	DefaultPawnClass = APilotCharacter::StaticClass();
	WorldMech = nullptr;
	WorldPilot = nullptr;
}

// Called when the game starts or when the level is loaded.
void AMechTestMode::StartPlay()
{
	Super::StartPlay();

	// Check if the MechClass property has been set in the Blueprint editor.
	if (MechClass)
	{
		FActorSpawnParameters SpawnParams;
		// This ensures the mech spawns even if there's a collision at the spawn point.
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// Attempt to spawn the single instance of the mech into the world.
		WorldMech = GetWorld()->SpawnActor<APlayerMech>(MechClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);

		// If the spawn was successful, deactivate it immediately so it's hidden and disabled until summoned.
		if (WorldMech)
		{
			WorldMech->Deactivate();
		}
	}
}

// Returns the persistent mech instance stored in the game mode.
APlayerMech* AMechTestMode::GetWorldMech() const
{
	return WorldMech;
}

// Allows other classes to set or update the persistent mech instance.
void AMechTestMode::SetWorldMech(APlayerMech* NewMech)
{
	WorldMech = NewMech;
}

// Returns the persistent pilot instance stored in the game mode.
APilotCharacter* AMechTestMode::GetWorldPilot() const
{
	return WorldPilot;
}

// Allows other classes to set or update the persistent pilot instance.
void AMechTestMode::SetWorldPilot(APilotCharacter* NewPilot)
{
	WorldPilot = NewPilot;
}

// Returns the Blueprint class of the mech to be spawned.
TSubclassOf<APlayerMech> AMechTestMode::GetMechClass() const
{
	return MechClass;
}

