// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities.generated.h"


/**
 * 
 */
UCLASS(BlueprintType,Blueprintable)
class UNREAL_TRAINING_API UAbilities : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int strength;
	UPROPERTY(BlueprintReadWrite)
	int constitution;
	UPROPERTY(BlueprintReadWrite)
	int dexteity;
	UPROPERTY(BlueprintReadWrite)
	int intelligence;
	UPROPERTY(BlueprintReadWrite)
	int wisdom;
	UPROPERTY(BlueprintReadWrite)
	int charisma;

	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities + Abilities", CompactNodeTitle = "Add",
		Keywords = "+ add plus abilities"), Category="MyClasses")
	static UAbilities* AddAbilities(UAbilities* A, UAbilities* B);

	UFUNCTION(BlueprintCallable)
	void Initialize(int strengthValue, int constitutionValue, int dexterityValue, int intelligenceValue,
		int wisdomValue, int charismaValue);
};




