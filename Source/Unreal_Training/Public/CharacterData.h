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
#include "TurnHandler.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UNREAL_TRAINING_API UCharacterData : public UObject, public IHealthProvider
{
	GENERATED_BODY()

	//FIELDS
public:
	UPROPERTY(BlueprintReadWrite)
	UTexture2D* portrait;
	
	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<ERaceNames> race;	
	
protected:
	UPROPERTY(BlueprintReadWrite)
	UHealthHandler* healthHandler;
	UPROPERTY(BlueprintReadWrite)
	UAbilities* abilities;
	UPROPERTY(BlueprintReadWrite)
	UFeatsHandler* featsHandler;
	UPROPERTY(BlueprintReadWrite)
	UEffectsHandler* effectsHandler;
	UPROPERTY(BlueprintReadWrite)
	UExperienceHandler* experienceHandler;
	UPROPERTY(BlueprintReadWrite)
	UTurnHandler* turnHandler;
	

	//FUNCTIONS
public:
	UFUNCTION(BlueprintCallable)
	void Set(TEnumAsByte<ERaceNames> raceValue, UTexture2D* portraitImage, UFeatsHandler* featsHandlerValue, UEffectsHandler* effectsHandlerValue,
		UAbilities* abilitiesValue, UExperienceHandler* experienceHandlerValue, UHealthHandler* healthHandlerValue);

	UFUNCTION(BlueprintCallable)
	void PerformAction();
		
	//INTERFACES

	UFUNCTION(BlueprintCallable) //need interface
	UAbilities* GetAbilities();
	
	UFUNCTION(BlueprintCallable)
	virtual UHealthHandler* GetHealth_Implementation() override;
	
	UFUNCTION(BlueprintCallable)
	UFeatsHandler* GetFeats();

	UFUNCTION(BlueprintCallable)
	UTurnHandler* GetTurnHandler();
	
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
