// Copyright Epic Games, Inc. All Rights Reserved.

#include "Dedicated_TestGameMode.h"
#include "Dedicated_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADedicated_TestGameMode::ADedicated_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
