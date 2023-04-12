// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Feat.generated.h"

UCLASS(Abstract)
class UNREAL_TRAINING_API UFeat : public UObject
{
	GENERATED_BODY()
public:
	
	UPROPERTY()
	int id;
	
	UPROPERTY()
	FString name; // maybe enum;
	
	UFUNCTION()
	virtual void Apply(){};

	UFUNCTION()
	virtual void Discard(){};
};



