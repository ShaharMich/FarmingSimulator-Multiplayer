// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "HarvestGround.generated.h"

UENUM(BlueprintType)
enum class EHarvestState : uint8
{
    Planted,
    Watered,
    Ripped
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHarvestGroundOnPlanted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHarvestGroundOnWatered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHarvestGroundOnRipped);


UCLASS()
class FARMSIM_API AHarvestGround : public AActor
{
	GENERATED_BODY()
	
public:	
	AHarvestGround();

protected:
	virtual void BeginPlay() override;
	

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* TriggerMesh;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintAssignable)
	FHarvestGroundOnPlanted OnPlanted;

	UPROPERTY(BlueprintAssignable)
	FHarvestGroundOnWatered OnWatered;

	UPROPERTY(BlueprintAssignable)
	FHarvestGroundOnRipped OnRipped;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Seed")
	FName SeedName;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CurrentState)
	EHarvestState CurrentState;

	UFUNCTION(BlueprintCallable)
	void HandleHarvesting();

	UFUNCTION(BlueprintCallable)
	void ActivateHarvesting();

	UFUNCTION()
	void OnRep_CurrentState();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ActivateHarvesting();
	void Server_ActivateHarvesting_Implementation();
	bool Server_ActivateHarvesting_Validate();
};
