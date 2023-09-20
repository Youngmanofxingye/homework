// Copyright Epic Games, Inc. All Rights Reserved.

#include "finalProjectGameMode.h"
#include "finalProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfinalProjectGameMode::AfinalProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
