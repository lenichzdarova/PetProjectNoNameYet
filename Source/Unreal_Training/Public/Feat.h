// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterData.h"
#include "UObject/NoExportTypes.h"
#include "Feat.generated.h"

UCLASS(Abstract)
class UNREAL_TRAINING_API UFeat : public UObject
{
	GENERATED_BODY()
	
public:	
	
	UFUNCTION()
	virtual void ApplyFeat(UCharacterData* character){};

	UFUNCTION()
	virtual void DiscardFeat(UCharacterData* character){};
};



