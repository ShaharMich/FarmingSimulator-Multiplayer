// Copyright Epic Games, Inc. All Rights Reserved.

#include "FarmSimCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ProcessingMachine.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "FarmHUD.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AFarmSimCharacter

AFarmSimCharacter::AFarmSimCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bReplicates = true;
	bAlwaysRelevant = true;
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFarmSimCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AFarmSimCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFarmSimCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFarmSimCharacter::Look);

		//Interact
		PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &AFarmSimCharacter::Interact);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AFarmSimCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AFarmSimCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AFarmSimCharacter::Interact()
{
    FVector PlayerLocation = GetActorLocation();
    float InteractionRadius = 100.0f; 
	
	//DrawDebugSphere(GetWorld(), GetActorLocation(), InteractionRadius, 12, FColor::Red, false, 2.0f);

    TArray<AActor*> OverlappingActors;
    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(this);

    UKismetSystemLibrary::SphereOverlapActors(
        this,
        PlayerLocation,
        InteractionRadius,
        TArray<TEnumAsByte<EObjectTypeQuery>>(), 
        AActor::StaticClass(),
        ActorsToIgnore,
        OverlappingActors
    );

    for (AActor* Actor : OverlappingActors)
    {
		ABudget* Budget = nullptr;
		if (!Budget)
		{
			TArray<AActor*> FoundBudgets;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABudget::StaticClass(), FoundBudgets);
			if (FoundBudgets.Num() > 0)
			{
				Budget = Cast<ABudget>(FoundBudgets[0]);
			}
		}
		ASaleSystem* SaleSystem = nullptr;
		if (!SaleSystem)
		{
			TArray<AActor*> Sales;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASaleSystem::StaticClass(), Sales);
			if (Sales.Num() > 0)
			{
				SaleSystem = Cast<ASaleSystem>(Sales[0]);
			}
		}
        AHarvestGround* HarvestGround = Cast<AHarvestGround>(Actor);
		ALake* Lake = Cast<ALake>(Actor);
		APlantTable* PlantStore = Cast<APlantTable>(Actor);
		AProcessingMachine* ProcessingMachine = Cast<AProcessingMachine>(Actor);
		AProductsStorage* ProductStorage = Cast<AProductsStorage>(Actor);
		ANPC* NPC = Cast<ANPC>(Actor);
        if (NPC && SaleSystem && Budget)
        {
			int32 Available = SaleSystem->IsAvailable(NPC->DesiredProduct);
			if(Available > 0)
			{
				SaleSystem->RemoveProduct(NPC->DesiredProduct.ToString(), 1);
				int32 ProductPrice = SaleSystem->GetProductPrice(NPC->DesiredProduct);
    			if (HasAuthority())
				{
					Budget->Server_IncreaseBudget(ProductPrice);
				}
				else
				{
					Server_RequestIncreaseBudget(ProductPrice, Budget);
				}
				NPC->CompletePurchase();
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Black, FString::Printf(TEXT("%s is out of stock right now. Please try again later."), *NPC->DesiredProduct.ToString()));
			}
            return; 
        }
		if (PlantStore && !HasPlant && Budget)
		{
			float Cost = (PlantStore->PlantName == "Wheat") ? 3.0f : 5.0f;
			if (Budget->GetBudget() > Cost)
			{
				if (HasAuthority())
				{
					Budget->Server_DecreaseBudget(Cost);
				}
				else 
				{
					Server_RequestDecreaseBudget(Cost, Budget);
				}
				HasPlant = true;
				HeldPlant = PlantStore->PlantName;
				return;
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("Out of funds!")));
				return;
			}
		}
		if (Lake && !HasWater)
		{
			HasWater = true;
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("Pumped water!")));
			return;
		}
        if (HarvestGround)
        {
			if(HarvestGround->CurrentState == EHarvestState::Planted && HasWater)
			{
				HarvestGround->ActivateHarvesting();
				HasWater = false;
				return;
			}
			else if(HarvestGround->CurrentState == EHarvestState::Watered && !HasSeeds)
			{
				HasSeeds = true;
				HeldSeed = HarvestGround->SeedName;
				HarvestGround->ActivateHarvesting();
				return;
			}
			else if(HarvestGround->CurrentState == EHarvestState::Ripped && HasPlant)
			{
				if(HarvestGround->SeedName.IsEqual(HeldPlant, ENameCase::IgnoreCase))
				{
					HarvestGround->ActivateHarvesting();
					HasPlant = false;
					return;
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("You are trying to plant the wrong seed!")));
					return;
				}
			}
            return;
        }
		if (ProcessingMachine && HasSeeds && Budget)
		{
			float Cost = (ProcessingMachine->RequiredSeedType == "Wheat") ? 5.0f : 8.0f;
			if(Budget->GetBudget() > Cost && ProcessingMachine->RequiredSeedType.IsEqual(HeldSeed, ENameCase::IgnoreCase))
			{
				ProcessingMachine->ActivateProcessing(this);
				if (HasAuthority())
				{
					Budget->Server_DecreaseBudget(Cost);
				}
				else 
				{
					Server_RequestDecreaseBudget(Cost, Budget);
				}
				HeldPlant = "Plant";

				return;
			}
			else if (Budget->GetBudget() < Cost && ProcessingMachine->RequiredSeedType.IsEqual(HeldSeed, ENameCase::IgnoreCase))
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("Out of funds!")));
				return;
			}
			else if (Budget->GetBudget() > Cost && !ProcessingMachine->RequiredSeedType.IsEqual(HeldSeed, ENameCase::IgnoreCase))
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("Wrong Machine!")));
			}
			return;
		}
		if (ProductStorage && Budget)
		{
			SaleSystem->AddProduct(HeldSeed.ToString(), 1);
			SaleSystem->GetTotalProducts();
			HasSeeds = false;
			HeldSeed = "Seed";
			return;
		}
    }
}

void AFarmSimCharacter::Server_RequestDecreaseBudget_Implementation(float Amount, ABudget* Budget)
{
    if (!Budget)
    {
        TArray<AActor*> FoundBudgets;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABudget::StaticClass(), FoundBudgets);
        if (FoundBudgets.Num() > 0)
        {
            Budget = Cast<ABudget>(FoundBudgets[0]);
        }
    }

    if (Budget)
    {
        Budget->Server_DecreaseBudget(Amount);
    }
}

bool AFarmSimCharacter::Server_RequestDecreaseBudget_Validate(float Amount, ABudget* Budget)
{
    return Amount > 0; 
}

void AFarmSimCharacter::Server_RequestIncreaseBudget_Implementation(float Amount, ABudget* Budget)
{
    if (!Budget)
    {
        TArray<AActor*> FoundBudgets;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABudget::StaticClass(), FoundBudgets);
        if (FoundBudgets.Num() > 0)
        {
            Budget = Cast<ABudget>(FoundBudgets[0]);
        }
    }

    if (Budget)
    {
        Budget->Server_IncreaseBudget(Amount);
    }
}

bool AFarmSimCharacter::Server_RequestIncreaseBudget_Validate(float Amount, ABudget* Budget)
{
    return Amount > 0; 
}


void AFarmSimCharacter::InteractWithMachine(AProcessingMachine* Machine)
{
    if (Machine)
    {
        Machine->ProcessByCharacter(this);
    }
}





#if 0
void ASaleSystem::Server_RemoveProduct_Implementation(const FString& ProductName, int32 Amount, ASaleSystem* SaleSystem)
{
    SaleSystem->Server_RemoveProduct(ProductName, Amount);
}

bool ASaleSystem::Server_RemoveProduct_Validate(const FString& ProductName, int32 Amount, ASaleSystem* SaleSystem)
{
    return Amount > 0;
}

void ASaleSystem::Server_AddProduct_Implementation(const FString& ProductName, int32 Amount, ASaleSystem* SaleSystem)
{
    SaleSystem->Server_AddProduct(ProductName, Amount);
}

bool ASaleSystem::Server_AddProduct_Validate(const FString& ProductName, int32 Amount, ASaleSystem* SaleSystem)
{
    return Amount > 0;
}
#endif
