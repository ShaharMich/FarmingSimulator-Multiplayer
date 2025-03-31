// Copyright to Shahar Michel, All Rights Reserved.


// Copyright to Shahar Michel, All Rights Reserved.


#include "SaleSystem.h"

ASaleSystem::ASaleSystem()
{
	PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;
	SetReplicateMovement(true);

	WheatCount = 0;
    FlourCount = 0;
    SesameCount = 0;
    TahiniCount = 0;
}

void ASaleSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASaleSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASaleSystem::AddProduct(FString ProductName, int32 Amount)
{
    if (ProductName == "Wheat")
        WheatCount += Amount;
    else if (ProductName == "Flour")
        FlourCount += Amount;
    else if (ProductName == "Sesame")
        SesameCount += Amount;
    else if (ProductName == "Tahini")
        TahiniCount += Amount;
}

void ASaleSystem::RemoveProduct(FString ProductName, int Amount)
{
    if (ProductName == "Wheat" && WheatCount >= Amount) WheatCount -= Amount;
    else if (ProductName == "Flour" && FlourCount >= Amount) FlourCount -= Amount;
    else if (ProductName == "Sesame" && SesameCount >= Amount) SesameCount -= Amount;
    else if (ProductName == "Tahini" && TahiniCount >= Amount) TahiniCount -= Amount;
}


int32 ASaleSystem::GetTotalProducts()
{
	FString DebugMessage = FString::Printf(
        TEXT("You have in stock: Wheat: %d | Flour: %d | Sesame: %d | Tahini: %d"),
        WheatCount, FlourCount, SesameCount, TahiniCount
    );

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DebugMessage);
    return WheatCount + FlourCount + SesameCount + TahiniCount;
}


int32 ASaleSystem::IsAvailable(FName ProductName)
{
    if (ProductName == "Wheat") return WheatCount;
    if (ProductName == "Flour") return FlourCount;
    if (ProductName == "Sesame") return SesameCount;
    if (ProductName == "Tahini") return TahiniCount;
    return 0; 
}

int ASaleSystem::GetProductPrice(FName ProductName)
{
    if (ProductName == "Wheat") return 5;
    if (ProductName == "Flour") return 10;
    if (ProductName == "Sesame") return 8;
    if (ProductName == "Tahini") return 15;
    return 0; 
}



#if 0
void ASaleSystem::Server_AddProduct_Implementation(const FString& ProductName, int32 Amount)
{
    if (Amount <= 0) return; // Ensure a valid amount

    if (ProductName == "Wheat")
        WheatCount += Amount;
    else if (ProductName == "Flour")
        FlourCount += Amount;
    else if (ProductName == "Sesame")
        SesameCount += Amount;
    else if (ProductName == "Tahini")
        TahiniCount += Amount;
}

bool ASaleSystem::Server_AddProduct_Validate(const FString& ProductName, int32 Amount)
{
    return Amount > 0;
}

void ASaleSystem::Server_RemoveProduct_Implementation(const FString& ProductName, int32 Amount)
{
    if (Amount <= 0) return;

    if (ProductName == "Wheat" && WheatCount >= Amount)
        WheatCount -= Amount;
    else if (ProductName == "Flour" && FlourCount >= Amount)
        FlourCount -= Amount;
    else if (ProductName == "Sesame" && SesameCount >= Amount)
        SesameCount -= Amount;
    else if (ProductName == "Tahini" && TahiniCount >= Amount)
        TahiniCount -= Amount;
}

bool ASaleSystem::Server_RemoveProduct_Validate(const FString& ProductName, int32 Amount)
{
    if (Amount <= 0) return false;

    if (ProductName == "Wheat") return WheatCount >= Amount;
    if (ProductName == "Flour") return FlourCount >= Amount;
    if (ProductName == "Sesame") return SesameCount >= Amount;
    if (ProductName == "Tahini") return TahiniCount >= Amount;
    
    return false;
}

int32 ASaleSystem::GetTotalProducts()
{
    FString DebugMessage = FString::Printf(
        TEXT("Stock: Wheat: %d | Flour: %d | Sesame: %d | Tahini: %d"),
        WheatCount, FlourCount, SesameCount, TahiniCount
    );

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DebugMessage);
    return WheatCount + FlourCount + SesameCount + TahiniCount;
}

int32 ASaleSystem::IsAvailable(FName ProductName)
{
    if (ProductName == "Wheat") return WheatCount;
    if (ProductName == "Flour") return FlourCount;
    if (ProductName == "Sesame") return SesameCount;
    if (ProductName == "Tahini") return TahiniCount;
    return 0;
}

int ASaleSystem::GetProductPrice(FName ProductName)
{
    if (ProductName == "Wheat") return 5;
    if (ProductName == "Flour") return 10;
    if (ProductName == "Sesame") return 8;
    if (ProductName == "Tahini") return 15;
    return 0;
}

void ASaleSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ASaleSystem, WheatCount);
    DOREPLIFETIME(ASaleSystem, FlourCount);
    DOREPLIFETIME(ASaleSystem, SesameCount);
    DOREPLIFETIME(ASaleSystem, TahiniCount);
}
#endif
