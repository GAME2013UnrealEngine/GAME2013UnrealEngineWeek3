// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Week3_Class_CPPGameMode.h"
#include "Week3_Class_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeek3_Class_CPPGameMode::AWeek3_Class_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
