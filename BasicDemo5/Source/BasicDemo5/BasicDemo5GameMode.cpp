// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicDemo5GameMode.h"
#include "BasicDemo5Character.h"
#include "UObject/ConstructorHelpers.h"

ABasicDemo5GameMode::ABasicDemo5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
