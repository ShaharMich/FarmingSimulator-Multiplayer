// Copyright to Shahar Michel, All Rights Reserved.

#include "NPC.h"
#include "Components/SplineComponent.h"
#include "Components/SphereComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Components/WidgetComponent.h"

ANPC::ANPC()
{
    PrimaryActorTick.bCanEverTick = true;

    bReplicates = true;
    SetReplicates(true);
	SetReplicateMovement(true);

	CounterLocation = FVector(-120.f, 280.f, 0.f);
    AIControllerClass = AAIController::StaticClass();
    // Spline for movement
    PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
    PathSpline->SetupAttachment(RootComponent);

    // Widget for displaying purchase intention
    PurchaseWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PurchaseWidget"));
    PurchaseWidget->SetupAttachment(RootComponent);

    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(RootComponent);
    InteractionSphere->SetSphereRadius(300.f);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
    InteractionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

}

void ANPC::BeginPlay()
{
    Super::BeginPlay();

    AAIController* AIController = Cast<AAIController>(GetController());

    if (PurchaseWidget)
    {        
        PurchaseWidget->SetVisibility(true);
        PurchaseWidget->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
        PurchaseWidget->SetWidgetSpace(EWidgetSpace::World);  // This makes the widget appear in the world.
        PurchaseWidget->SetRelativeLocation(FVector(0.f, 0.f, 5.f)); // Adjust the height as needed.

        if (PurchaseWidget->GetWidgetClass()) 
        {
            UUserWidget* CreatedWidget = CreateWidget<UUserWidget>(GetWorld(), PurchaseWidget->GetWidgetClass());
            if (CreatedWidget)
            {
                PurchaseWidget->SetWidget(CreatedWidget);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to create widget for PurchaseWidget!"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("PurchaseWidget has no WidgetClass set!"));
        }
    }
    
	if (HasAuthority()) 
    {
        ChooseRandomProduct();
    }

    MoveToCounter();
}

void ANPC::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TArray<AActor*> OverlappingActors;
    InteractionSphere->GetOverlappingActors(OverlappingActors);

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

void ANPC::ChooseRandomProduct()
{
    if (HasAuthority())
    {
        TArray<FName> Products = { TEXT("Wheat"), TEXT("Sesame"), TEXT("Flour"), TEXT("Tahini") };
        int32 RandomIndex = FMath::RandRange(0, Products.Num() - 1);
        DesiredProduct = Products[RandomIndex];

        OnRep_DesiredProduct();
    }   
}

void ANPC::OnRep_DesiredProduct()
{
    if (!PurchaseWidget || !PurchaseWidget->GetUserWidgetObject())
    {
        GetWorldTimerManager().SetTimerForNextTick(this, &ANPC::OnRep_DesiredProduct);
        UE_LOG(LogTemp, Warning, TEXT("NPC wants to buy: %s"), *DesiredProduct.ToString());
        return;
    }

    UUserWidget* Widget = PurchaseWidget->GetUserWidgetObject();
    UTextBlock* ProductText = Cast<UTextBlock>(Widget->GetWidgetFromName(TEXT("ProductTextBlock")));

    if (!ProductText)
    {
        UE_LOG(LogTemp, Error, TEXT("ProductTextBlock not found in widget!"));
        return;
    }

    ProductText->SetText(FText::FromName(DesiredProduct));
}



void ANPC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ANPC, DesiredProduct);
}

void ANPC::MoveToCounter()
{
    if (HasAuthority())
    {
        Multicast_MoveToCounter();
    }
}

void ANPC::Multicast_MoveToCounter_Implementation()
{
    AAIController* AIController = Cast<AAIController>(GetController());
    if (!AIController)
    {
        GetWorldTimerManager().SetTimerForNextTick(this, &ANPC::MoveToCounter);
        return;
    }

    AIController->MoveToLocation(CounterLocation);
}


bool ANPC::Multicast_MoveToCounter_Validate()
{
    return true;
}

void ANPC::CompletePurchase()
{
    if (HasAuthority())
    {
        UE_LOG(LogTemp, Warning, TEXT("NPC bought %s"), *DesiredProduct.ToString());
        Destroy();
    }
    else
    {
        Server_CompletePurchase();
    }
}

void ANPC::Server_CompletePurchase_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("NPC bought %s"), *DesiredProduct.ToString());
    Destroy(); 
}

bool ANPC::Server_CompletePurchase_Validate()
{
    return true;
}