// Copyright Epic Games, Inc. All Rights Reserved.

#include "BounseaGameMode.h"
#include "BounseaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABounseaGameMode::ABounseaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/BP_Ball"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
