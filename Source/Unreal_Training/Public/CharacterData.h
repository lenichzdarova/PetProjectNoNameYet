// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthHandler.h"
#include "Abilities.h"
#include "ExperienceHandler.h"
#include "FeatsHandler.h"
#include "EffectsHandler.h"
#include "RaceEnum.h"
#include "ProfessionEnum.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

UCLASS(BlueprintType)
class UNREAL_TRAINING_API UCharacterData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UTexture2D* portrait;
	
	UPROPERTY()
	TEnumAsByte<ERaceNames> race;
	
	//FIELDS
private:
	UPROPERTY()
	UHealthHandler* healthHandler;
	UPROPERTY()
	UAbilities* abilities;
	UPROPERTY()
	UFeatsHandler* featsHandler;
	UPROPERTY()
	UEffectsHandler* effectsHandler;
	UPROPERTY()
	UExperienceHandler* experienceHandler;

	//FUNCTIONS
public:
	UFUNCTION(BlueprintCallable)
	void Set(TEnumAsByte<ERaceNames> raceValue, UFeatsHandler* featsHandlerValue, UEffectsHandler* effectsHandlerValue, UAbilities* abilitiesValue, UExperienceHandler* experienceHandlerValue);
};
