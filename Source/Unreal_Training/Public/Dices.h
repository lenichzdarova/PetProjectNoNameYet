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
	UFUNCTION(BlueprintCallable)
	int Roll()const;
	UFUNCTION(BlueprintCallable)
	int GetMaxRoll()const;
	UFUNCTION(BlueprintCallable)
	int GetMinRoll()const;
	UFUNCTION(BlueprintCallable)
	UDices* Set(int rollCount, int facesValue);
	UFUNCTION(BlueprintCallable)
	FString Print() const;
};
