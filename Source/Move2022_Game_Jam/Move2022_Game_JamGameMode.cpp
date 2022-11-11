// Copyright Epic Games, Inc. All Rights Reserved.

#include "Move2022_Game_JamGameMode.h"
#include "Move2022_Game_JamPlayerController.h"
#include "Move2022_Game_JamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMove2022_Game_JamGameMode::AMove2022_Game_JamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMove2022_Game_JamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}