// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue4cppGameMode.h"
#include "ue4cppHUD.h"
#include "ue4cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue4cppGameMode::Aue4cppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Aue4cppHUD::StaticClass();
}
