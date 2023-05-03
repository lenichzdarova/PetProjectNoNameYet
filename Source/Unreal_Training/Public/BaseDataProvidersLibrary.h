// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dices.h"
#include "Abilities.h"
#include "Feat.h"
#include "ERaceEnum.h"
#include "EProfessionEnum.h"
#include "BaseDataProvidersLibrary.generated.h"


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class UNREAL_TRAINING_API UBaseDataProvidersLibrary : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static UAbilities* GetBaseRaceAbilities(ERaceNames race);
	
	UFUNCTION(BlueprintCallable,BlueprintPure)
	static int GetBaseAttackBonus(EProfessionNames profession, int level);
	
	UFUNCTION(BlueprintCallable,BlueprintPure)
	static UDices* GetBaseHealthBonus(EProfessionNames profession);

	UFUNCTION(BlueprintCallable,BlueprintPure)
	static TSet<UFeat*> GetRaceBaseFeats(ERaceNames race); 
};
