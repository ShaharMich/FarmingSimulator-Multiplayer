// Fill out your copyright notice in the Description page of Project Settings.

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SaleSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FARMSIM_API ASaleSystem : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ASaleSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 WheatCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 FlourCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 SesameCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 TahiniCount;

    UFUNCTION(BlueprintCallable, Category = "Storage")
    void AddProduct(FString ProductName, int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Storage")
    void RemoveProduct(FString ProductName, int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Storage")
    int32 GetTotalProducts();

	UFUNCTION(BlueprintCallable, Category = "Storage")
    int32 IsAvailable(FName ProductName);

    UFUNCTION(BlueprintCallable, Category = "Budget")
    int GetProductPrice(FName ProductName);
};


#if 0
UFUNCTION(Server, Reliable, WithValidation)
    void Server_RemoveProduct(const FString& ProductName, int32 Amount);
    void Server_RemoveProduct_Implementation(const FString& ProductName, int32 Amount);
    bool Server_RemoveProduct_Validate(const FString& ProductName, int32 Amount);

    UFUNCTION(Server, Reliable, WithValidation)
    void Server_AddProduct(const FString& ProductName, int32 Amount);
    void Server_AddProduct_Implementation(const FString& ProductName, int32 Amount);
    bool Server_AddProduct_Validate(const FString& ProductName, int32 Amount);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
#endif