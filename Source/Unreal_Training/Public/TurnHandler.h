// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ERedinessEnum.h"
#include "UObject/NoExportTypes.h"
#include "TurnHandler.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UTurnHandler : public UObject
{
	GENERATED_BODY()

//PROPERSTIES

	public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite,BlueprintSetter = "SetStatus")
	TEnumAsByte<EReadyness> status{Ready};

	private:
	/** Please add a variable description */
	UPROPERTY(EditDefaultsOnly, Category="Default")
	float BaseTurnTime{6.0f};

//FUNCTIONS
	public:		
		UFUNCTION(BlueprintCallable)
		void MakeTurn();

	UFUNCTION(BlueprintCallable,BlueprintSetter)
	void SetStatus(EReadyness value);
	
	private:
		/** Please add a function description */
		UFUNCTION(BlueprintCallable)
		void NewTurn();


	//EVENTS
	public:
		/** Please add a variable description */
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStatusChange);
		UPROPERTY(BlueprintAssignable, EditDefaultsOnly, Category="Default")
		FStatusChange StatusChange;
	
};

	

