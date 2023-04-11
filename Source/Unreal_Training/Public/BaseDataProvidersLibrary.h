// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dices.h"
#include "Abilities.h"
#include "RaceEnum.h"
#include "ProfessionEnum.h"
#include "BaseDataProvidersLibrary.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UBaseDataProvidersLibrary : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static UAbilities* GetBaseRaceAbilities(ERaceNames race);
	UFUNCTION(BlueprintCallable,BlueprintPure)
	static int GetBaseAttackBonus(EProfessionNames profession, int level);
	UFUNCTION(BlueprintCallable,BlueprintPure)
	static UDices* GetBaseHealthBonus(EProfessionNames profession);    
};
