// Copyright Epic Games, Inc. All Rights Reserved.

#include "GoJamGameMode.h"
#include "GoJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGoJamGameMode::AGoJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
