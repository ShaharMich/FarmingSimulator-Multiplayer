// Copyright to Shahar Michel, All Rights Reserved.

#include "HarvestGround.h"
#include "Net/UnrealNetwork.h"

AHarvestGround::AHarvestGround()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicateMovement(true);

	CurrentState = EHarvestState::Ripped;

	SeedName = FName("Seed");

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	TriggerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerMesh"));
	TriggerMesh->SetupAttachment(RootComp);
	TriggerMesh->SetIsReplicated(true);

	auto TriggerMeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if(TriggerMeshAsset.Succeeded())
	{
		TriggerMesh->SetStaticMesh(TriggerMeshAsset.Object);
		TriggerMesh->SetRelativeScale3D(FVector(1.5f, 2.0f, 0.5f));
		TriggerMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 10.0f));
	}

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComp);
	Mesh->SetIsReplicated(true);

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if(MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 1.5f, 0.1f));
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 7.0f));
	}
	
}

void AHarvestGround::BeginPlay()
{
	Super::BeginPlay();
	
	TriggerMesh->SetVisibility(false);
	TriggerMesh->SetCollisionProfileName(FName("OverlapAll"));

}

void AHarvestGround::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> OverlappingActors;
    TriggerMesh->GetOverlappingActors(OverlappingActors);

    for (AActor* A : OverlappingActors)
    {
        APawn* PlayerPawn = Cast<APawn>(A);
        if (PlayerPawn)
        {
            AController* PlayerController = PlayerPawn->GetController();
            if (PlayerController)
            {
                SetOwner(PlayerController);  
            }
        }
    }
}

void AHarvestGround::ActivateHarvesting()
{
	if(HasAuthority())
	{
		HandleHarvesting();
	}
	else
	{
		Server_ActivateHarvesting();
	}
}

void AHarvestGround::HandleHarvesting()
{
	TArray<AActor*> OverlappingActors;
	AActor* TriggerActor = 0;
	TriggerMesh->GetOverlappingActors(OverlappingActors);

	for(int ActorIdx = 0; ActorIdx < OverlappingActors.Num(); ++ActorIdx)
	{
		AActor* A = OverlappingActors[ActorIdx];
		if(A->ActorHasTag("Player"))
		{
			TriggerActor = A;
			break;
		}			
	}

	if(TriggerActor)
	{
		if (CurrentState == EHarvestState::Ripped)
			CurrentState = EHarvestState::Planted;

		else if (CurrentState == EHarvestState::Planted)
			CurrentState = EHarvestState::Watered;

		else if (CurrentState == EHarvestState::Watered)
			CurrentState = EHarvestState::Ripped;

		OnRep_CurrentState();
	}
}

void AHarvestGround::Server_ActivateHarvesting_Implementation()
{
    HandleHarvesting(); 
}

bool AHarvestGround::Server_ActivateHarvesting_Validate()
{
    return true; 
}

void AHarvestGround::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AHarvestGround, CurrentState);
}

void AHarvestGround::OnRep_CurrentState()
{
	if (CurrentState == EHarvestState::Ripped) 
	{
		OnRipped.Broadcast();
	}
	else if (CurrentState == EHarvestState::Planted) 
	{
		OnPlanted.Broadcast();
	}
	else if (CurrentState == EHarvestState::Watered) 
	{
		OnWatered.Broadcast();
	}
}

