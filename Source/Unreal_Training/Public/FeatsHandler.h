// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EFeatEnum.h"
#include "UObject/NoExportTypes.h"
#include "FeatsHandler.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREAL_TRAINING_API UFeatsHandler : public UObject
{
	GENERATED_BODY()
	//FIELD

	UPROPERTY()
	TSet<TEnumAsByte<EFeatNames>>  activeFeats;

public:
	//FUNCTIONS
	UFUNCTION()
	const TSet<TEnumAsByte<EFeatNames>>& GetFeats();
	
	UFUNCTION()
	void AddFeat(EFeatNames feat);

	UFUNCTION()
	void RemoveFeat(EFeatNames feat);


	
	//EVENTS	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChanges);

	UPROPERTY()
	FChanges FeatsChanged;	
};
