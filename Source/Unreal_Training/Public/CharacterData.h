// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthHandler.h"
#include "Abilities.h"
#include "ExperienceHandler.h"
#include "FeatsHandler.h"

#include "EffectsHandler.h"
#include "HealthProvider.h"
#include "ERaceEnum.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

UCLASS(BlueprintType)
class UNREAL_TRAINING_API UCharacterData : public UObject, public IHealthProvider
{
	GENERATED_BODY()

	//FIELDS
public:
	UPROPERTY()
	UTexture2D* portrait;
	
	UPROPERTY()
	TEnumAsByte<ERaceNames> race;	
	
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
	void Set(TEnumAsByte<ERaceNames> raceValue, UTexture2D* portraitImage, UFeatsHandler* featsHandlerValue, UEffectsHandler* effectsHandlerValue,
		UAbilities* abilitiesValue, UExperienceHandler* experienceHandlerValue, UHealthHandler* healthHandlerValue);
		
	//INTERFACES

	UFUNCTION(BlueprintCallable) //need interface
	UAbilities* GetAbilities();
	
	UFUNCTION(BlueprintCallable)
	virtual UHealthHandler* GetHealth_Implementation() override;
	
	UFUNCTION(BlueprintCallable)
	UFeatsHandler* GetFeats();
	
private:
	
	void SubscribeMembersEvents();
	UFUNCTION()
	void OnStrengthChanged();
	UFUNCTION()
	void OnConstitutionChanged();
	UFUNCTION()
	void OnDexterityChanged();
	UFUNCTION()
	void OnIntelligenceChanged();
	UFUNCTION()
	void OnWisdomChanged();
	UFUNCTION()
	void OnCharismaChanged();	
};
