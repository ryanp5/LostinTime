// Copyright Epic Games, Inc. All Rights Reserved.

#include "lostinTwimeGameMode.h"
#include "lostinTwimeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AlostinTwimeGameMode::AlostinTwimeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
