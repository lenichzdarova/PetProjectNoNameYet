// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthHandler.h"
#include "UObject/Interface.h"
#include "HealthProvider.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UHealthProvider : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UNREAL_TRAINING_API IHealthProvider
{
	GENERATED_BODY()	
	
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	UHealthHandler* GetHealth();
};
