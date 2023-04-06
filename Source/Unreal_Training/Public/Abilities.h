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
	int strength{10};
	UPROPERTY(BlueprintReadWrite)
	int constitution{10};
	UPROPERTY(BlueprintReadWrite)
	int dexterity{10};
	UPROPERTY(BlueprintReadWrite)
	int intelligence{10};
	UPROPERTY(BlueprintReadWrite)
	int wisdom{10};
	UPROPERTY(BlueprintReadWrite)
	int charisma{10};

	UFUNCTION(BlueprintPure, meta=(DisplayName = "Abilities + Abilities", CompactNodeTitle = "Add",
		Keywords = "+ add plus abilities"), Category="MyClasses")
	static UAbilities* AddAbilities(UAbilities* A, UAbilities* B);

	UFUNCTION(BlueprintCallable)
	void SetAbilities(int strengthValue, int constitutionValue, int dexterityValue, int intelligenceValue,
		int wisdomValue, int charismaValue);
};




