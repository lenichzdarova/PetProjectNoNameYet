// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Feat.h"
#include "DwarvenToughness.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_TRAINING_API UDwarvenToughness : public UFeat
{
	GENERATED_BODY()

	UPROPERTY()
	int healthPerLevelBonus = 1; 
	
	
	void Apply() override;
	
	void Discard() override;
};
