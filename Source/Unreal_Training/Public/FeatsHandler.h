// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Feat.h"
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

public:
	
	UPROPERTY()
	TSet<UFeat*> characterFeats;

	//FUNCTIONS



	
	//EVENTS	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChanges);

	UPROPERTY()
	FChanges FeatsChanged;	
};
