// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthHandler.h"

void UHealthHandler::Set(int baseHealthValue, int constitutionBonusValue, int currentLevelValue)
{
	baseHealth = baseHealthValue;
	constitutionBonus = constitutionBonusValue;
	currentLevel = currentLevelValue;
	CalculateMaxHealth();
	currentHealth = maxHealth;
}

void UHealthHandler::AddCurrentHealth(int value)
{
	currentHealth += value;
	CurrentHealthChange.Broadcast();
}
void UHealthHandler::RemoveCurrentHealth(int value)
{
	currentHealth -= value;
	CurrentHealthChange.Broadcast();
}

void UHealthHandler::SetConstitutionBonus(int value)
{
	int change = value - constitutionBonus;
	int healthChange = change * currentLevel;
	constitutionBonus = value;
	CalculateMaxHealth();
	AddCurrentHealth(healthChange);		
}
void UHealthHandler::AddBonusPerLevel(int value)
{
	bonusPerLevel += value;
	CalculateMaxHealth();
	int healthDelta = value * currentLevel;
	AddCurrentHealth(healthDelta);
}

void UHealthHandler::SetCurrentLevel(int value)
{
	int change = value - currentLevel;
	int healthChange = change * constitutionBonus;
	currentLevel = value;
	CalculateMaxHealth();
	AddCurrentHealth(healthChange);	
}
void UHealthHandler::CalculateMaxHealth()
{
	maxHealth = (constitutionBonus + bonusPerLevel) * currentLevel + baseHealth;
	MaxHealthChange.Broadcast();
}
void UHealthHandler::AddBaseHealth(int value)
{
	baseHealth += value;
	CalculateMaxHealth();
	AddCurrentHealth(value);
}








