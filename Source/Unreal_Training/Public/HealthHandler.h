// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealthHandler.generated.h"

UCLASS(Blueprintable, BlueprintType)
class UHealthHandler : public UObject
{
	GENERATED_BODY()

	//DATA MEMBERS
private:	
	int baseHealth{0};	
	int constitutionBonus{0};	
	int currentLevel{0};

public:
	
	UPROPERTY(BlueprintReadWrite)
	int maxHealth{0};

	UPROPERTY(BlueprintReadWrite)
	int currentHealth{0};
	
	//FUNCTIONS
private:
	UFUNCTION(BlueprintCallable)
	void CalculateMaxHealth();

	
public:	
	UFUNCTION(BlueprintCallable)
	void AddCurrentHealth(int value);

	UFUNCTION(BlueprintCallable)
	void RemoveCurrentHealth(int value);
	
	UFUNCTION(BlueprintCallable)
	void Set(int baseHealthValue, int constitutionBonusValue, int currentLevelValue);		

	UFUNCTION(BlueprintCallable)
	void SetConstitutionBonus(int constitutionBonusValue);

	UFUNCTION(BlueprintCallable)
	void SetCurrentLevel(int currentLevelValue);

	UFUNCTION(BlueprintCallable)
	void AddBaseHealth(int baseHealthBonusValue);

	// EVENTS
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthChange);
	
	UPROPERTY(BlueprintAssignable)
	FHealthChange CurrentHealthChange;

	UPROPERTY(BlueprintAssignable)
	FHealthChange MaxHealthChange;
};

