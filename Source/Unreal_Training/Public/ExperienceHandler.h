// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EProfessionEnum.h"
#include "UObject/NoExportTypes.h"
#include "ExperienceHandler.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UExperienceHandler : public UObject
{
	GENERATED_BODY()

	//FIELDS
public:
	const int experiencePerLevel = 1000;
	
	UPROPERTY()
	TMap<int,TEnumAsByte<EProfessionNames>> professionProgress;
	
	UPROPERTY()
	int currentExperience{0};
	
	UPROPERTY()
	int experienceToNExtLevel{0};

	UPROPERTY()
	int levelUpPoints{0};

	//FUNCTIONS
private:
	UFUNCTION(BlueprintCallable)
	void SetExperienceToNextLevel();
	
	UFUNCTION(BlueprintCallable)
	int GetCharacterLevel();
	
	UFUNCTION(BlueprintCallable)
	void Set(TArray <TEnumAsByte<EProfessionNames>> characterProgress, int currentExperienceValue);

	UFUNCTION(BlueprintCallable)
	void AddLevelUp(int value);

	UFUNCTION(BlueprintCallable)
	void RemoveLevelUp(int value);

	UFUNCTION(BlueprintCallable)
	void AddExperience(int value);	

	//EVENTS
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChanges);
	
	UPROPERTY(BlueprintAssignable)
	FChanges CurrentExperienceChanged;

	UPROPERTY(BlueprintAssignable)
	FChanges ExperienceToNextLevelChanged;

	UPROPERTY(BlueprintAssignable)
	FChanges CharacterLevelChanged;

	UPROPERTY(BlueprintAssignable)
	FChanges LevelUpPointsChanged;
};
