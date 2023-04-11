// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProfessionEnum.h"
#include "UObject/NoExportTypes.h"
#include "ExperienceHandler.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UExperienceHandler : public UObject
{
	GENERATED_BODY()

public:
	
	UPROPERTY()
	TMap<int,TEnumAsByte<EProfessionNames>> professionProgress;
	
	UPROPERTY()
	int currentExperience{0};
	
	UPROPERTY()
	int experienceToNExtLevel{0};

	UFUNCTION()
	int GetCharacterLevel();
	
	UFUNCTION()
	void Set(TArray <TEnumAsByte<EProfessionNames>> characterProgress, int currentExperienceValue);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChanges);

	UPROPERTY()
	FChanges currentExperienceChange;

	UPROPERTY()
	FChanges ExperienceToNextLevelChange;

	UPROPERTY()
	FChanges CharacterLevelChange;
};
