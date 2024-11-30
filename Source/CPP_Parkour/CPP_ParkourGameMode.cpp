// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_ParkourGameMode.h"
#include "CPP_ParkourCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_ParkourGameMode::ACPP_ParkourGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
