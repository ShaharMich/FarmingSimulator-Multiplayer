// Copyright to Shahar Michel, All Rights Reserved.

#include "Budget.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "FarmHUD.h"

ABudget::ABudget()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;
	SetReplicateMovement(true);

    CurrentBudget = 50.0f;
}

void ABudget::BeginPlay()
{
    Super::BeginPlay();

    UpdateHUD();
}

float ABudget::GetBudget() const
{
    return CurrentBudget;
}

void ABudget::OnRep_CurrentBudget()
{
    UpdateHUD();
}

void ABudget::Server_DecreaseBudget_Implementation(float Amount)
{
    CurrentBudget -= Amount;
    OnRep_CurrentBudget();
}

bool ABudget::Server_DecreaseBudget_Validate(float Amount)
{
    return Amount >= 0.0f;
}

void ABudget::Server_IncreaseBudget_Implementation(float Amount)
{
    CurrentBudget += Amount;
    OnRep_CurrentBudget();
}

bool ABudget::Server_IncreaseBudget_Validate(float Amount)
{
    return Amount >= 0.0f;
}

void ABudget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ABudget, CurrentBudget);
}

void ABudget::UpdateHUD()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        AFarmHUD* HUD = Cast<AFarmHUD>(PC->GetHUD());
        if (HUD)
        {
            HUD->UpdateBudget(CurrentBudget);
        }
    }
}

