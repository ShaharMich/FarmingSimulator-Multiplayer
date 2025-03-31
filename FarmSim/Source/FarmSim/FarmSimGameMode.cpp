// Copyright Epic Games, Inc. All Rights Reserved.

#include "FarmSimGameMode.h"
//#include "FarmSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFarmSimGameMode::AFarmSimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	HUDClass = AFarmHUD::StaticClass();
}

# if 0
void AFarmSimGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (NewPlayer)
    {
        UE_LOG(LogTemp, Warning, TEXT("Assigning HUD to PlayerController: %s"), *NewPlayer->GetName());

        if (!NewPlayer->GetHUD())
        {
            NewPlayer->ClientSetHUD(HUDClass);
            UE_LOG(LogTemp, Warning, TEXT("✅ Successfully assigned HUD to player: %s"), *NewPlayer->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("🔹 Player already has HUD: %s"), *NewPlayer->GetName());
        }
    }
}
#endif