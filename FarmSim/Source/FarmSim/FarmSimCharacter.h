// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GrowingPlants.h"
#include "Lake.h"
#include "PlantTable.h"
#include "ProductsStorage.h"
#include "Budget.h"
#include "NPC.h"
#include "SaleSystem.h"
#include "Budget.h"
#include "FarmSimCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class AProcessingMachine;
struct FInputActionValue;


DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AFarmSimCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	AFarmSimCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	void Interact();

	UPROPERTY(EditAnywhere)
    EHarvestState CurrentState;

	UPROPERTY(EditAnywhere)
	bool HasSeeds = false;

	void InteractWithMachine(AProcessingMachine* Machine);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Processing")
	FName HeldSeed;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Processing")
	FName HeldPlant;

	void DisplaySeedName();

	UPROPERTY(EditAnywhere)
	bool HasWater = false;

	UPROPERTY(EditAnywhere)
	bool HasPlant = false;


	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestDecreaseBudget(float Amount, ABudget* Budget);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestIncreaseBudget(float Amount, ABudget* Budget);
};

