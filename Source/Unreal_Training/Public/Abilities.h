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
	int strength{0};
	UPROPERTY(BlueprintReadWrite)
	int constitution{0};
	UPROPERTY(BlueprintReadWrite)
	int dexterity{0};
	UPROPERTY(BlueprintReadWrite)
	int intelligence{0};
	UPROPERTY(BlueprintReadWrite)
	int wisdom{0};
	UPROPERTY(BlueprintReadWrite)
	int charisma{0};

	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities + Abilities", CompactNodeTitle = "+",
		CommutativeAssociativeBinaryOperator = true, Keywords = "+ add plus abilities"), Category="MyClasses")
	static UAbilities* AddAbilities(UAbilities* A, UAbilities* B);

	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities - Abilities", CompactNodeTitle = "-",
		CommutativeAssociativeBinaryOperator = true, Keywords = "- subtract minus abilities"), Category="MyClasses")
	static UAbilities* SubtractAbilities(UAbilities* A, UAbilities* B);

	UFUNCTION(BlueprintCallable)
	void SetAbilities(int strengthValue, int constitutionValue, int dexterityValue, int intelligenceValue,
		int wisdomValue, int charismaValue);
};




