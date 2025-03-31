// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPC.generated.h"

UCLASS()
class FARMSIM_API ANPC : public ACharacter
{
    GENERATED_BODY()

public:
    ANPC();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

    // AI Movement
    UPROPERTY(EditAnywhere, Category = "AI")
    class USplineComponent* PathSpline;

    UFUNCTION()
    void MoveToCounter();

    UPROPERTY(EditAnywhere, Category = "AI")
    FVector CounterLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    class UWidgetComponent* PurchaseWidget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Purchase", ReplicatedUsing = OnRep_DesiredProduct)
    FName DesiredProduct;

    UFUNCTION()
    void OnRep_DesiredProduct();

    void ChooseRandomProduct();

	UFUNCTION()
	void CompletePurchase();

    UPROPERTY(EditAnywhere, Category = "Interaction")
    class USphereComponent* InteractionSphere;

    void Interact();

    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_MoveToCounter();
    void Multicast_MoveToCounter_Implementation();
    bool Multicast_MoveToCounter_Validate();

    UFUNCTION(Server, Reliable, WithValidation)
    void Server_CompletePurchase();
    void Server_CompletePurchase_Implementation();
    bool Server_CompletePurchase_Validate();

};
