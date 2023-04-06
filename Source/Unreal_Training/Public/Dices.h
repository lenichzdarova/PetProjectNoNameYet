// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dices.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UDices : public UObject
{
	GENERATED_BODY()

private:	
	int rolls, faces;

public:
	UFUNCTION(BlueprintPure)
	int Roll()const;
	UFUNCTION(BlueprintPure)
	int GetMaxRoll()const;
	UFUNCTION(BlueprintPure)
	int GetMinRoll()const;
	UFUNCTION(BlueprintPure)
	UDices* Set(int rollCount, int facesValue);
	UFUNCTION(BlueprintPure)
	FString Print();
};
