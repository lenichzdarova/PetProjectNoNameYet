// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthHandler.h"

void UHealthHandler::Set(int baseHealthValue, int constitutionBonusValue, int currentLevelValue)
{
	baseHealth = baseHealthValue;
	constitutionBonus = constitutionBonusValue;
	currentLevel = currentLevelValue;
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
	maxHealth = constitutionBonus * currentLevel + baseHealth;
	MaxHealthChange.Broadcast();
}
void UHealthHandler::AddBaseHealth(int value)
{
	baseHealth += value;
	CalculateMaxHealth();
	AddCurrentHealth(value);
}








