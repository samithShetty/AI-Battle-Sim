// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectGameMode.h"
#include "TestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectGameMode::ATestProjectGameMode()
{
	// set default pawn class to Spectator
	{
		DefaultPawnClass = ASpectatorPawn;
	}
}
