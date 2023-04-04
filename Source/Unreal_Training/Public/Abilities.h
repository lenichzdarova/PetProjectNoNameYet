// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_TRAINING_API UAbilities : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int strength;
	UPROPERTY()
	int constitution;
	UPROPERTY()
	int dexteity;
	UPROPERTY()
	int intelligence;
	UPROPERTY()
	int wisdom;
	UPROPERTY()
	int charisma;

	UFUNCTION(BlueprintCallable,BlueprintPure)
	static UAbilities* AddAbilities (UAbilities* A, UAbilities* B);
};
