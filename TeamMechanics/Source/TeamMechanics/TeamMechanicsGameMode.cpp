// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TeamMechanicsGameMode.h"
#include "TeamMechanicsHUD.h"
#include "TeamMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamMechanicsGameMode::ATeamMechanicsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATeamMechanicsHUD::StaticClass();
}
