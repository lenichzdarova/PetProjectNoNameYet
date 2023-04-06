// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities.h"
#include "RaceEnum.h"
#include "ProfessionNames.h"
#include "UObject/NoExportTypes.h"
#include "StaticProvidersLibrary.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UStaticProvidersLibrary : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable,BlueprintPure)
	static UAbilities* GetBaseRaceAbilities(ERaceNames race);
	UFUNCTION(BlueprintCallable,BlueprintPure)
	static int GetBaseAttackBonus(EProfessionNames profession, int level);
};
