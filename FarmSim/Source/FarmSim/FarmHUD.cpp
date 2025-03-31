// Copyright to Shahar Michel, All Rights Reserved.

#include "FarmHUD.h"
#include "FarmSimCharacter.h"
#include "Budget.h"
#include "Engine/Canvas.h"
#include "FarmSimGameMode.h"
#include "Kismet/GameplayStatics.h"

void AFarmHUD::DrawHUD()
{
    Super::DrawHUD();

    FString BudgetText = FString::Printf(TEXT("Budget: $%.2f"), CurrentBudget);
    int32 ViewportWidth, ViewportHeight;
    GetOwningPlayerController()->GetViewportSize(ViewportWidth, ViewportHeight);

    float X = ViewportWidth - 200.0f;
    float Y = 50.0f;

    FLinearColor TextColor = FLinearColor::Black;
    FCanvasTextItem TextItem(FVector2D(X, Y), FText::FromString(BudgetText), GEngine->GetLargeFont(), TextColor);
    Canvas->DrawItem(TextItem);
}

void AFarmHUD::UpdateBudget(float NewBudget)
{
    CurrentBudget = NewBudget;
}
