// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Budget.generated.h"

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FARMSIM_API ABudget : public AActor
{
    GENERATED_BODY()

private:
    UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_CurrentBudget)
    float CurrentBudget;

    UFUNCTION()
    void OnRep_CurrentBudget();

    void UpdateHUD();

protected:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    virtual void BeginPlay() override;
public:
    ABudget();

    UFUNCTION(BlueprintCallable, Category = "Budget")
    float GetBudget() const;

    UFUNCTION(Server, Reliable, WithValidation)
    void Server_DecreaseBudget(float Amount);
    void Server_DecreaseBudget_Implementation(float Amount);
    bool Server_DecreaseBudget_Validate(float Amount);

    UFUNCTION(Server, Reliable, WithValidation)
    void Server_IncreaseBudget(float Amount);
    void Server_IncreaseBudget_Implementation(float Amount);
    bool Server_IncreaseBudget_Validate(float Amount);

};
