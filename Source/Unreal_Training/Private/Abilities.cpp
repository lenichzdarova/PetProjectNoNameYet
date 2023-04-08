// Fill out your copyright notice in the Description page of Project Settings.

#include "Abilities.h"

UAbilities* UAbilities::AddAbilities(UAbilities* A, UAbilities* B)
{
	UAbilities* result = NewObject<UAbilities>();
	result->strength = A->strength + B->strength;
	result->constitution = A->constitution + B->constitution;
	result->dexterity = A->dexterity + B->dexterity;
	result->intelligence = A->intelligence + B->intelligence;
	result->wisdom = A->wisdom + B->wisdom;
	result->charisma = A->charisma + B->charisma;
	return result;
}

UAbilities* UAbilities::SubtractAbilities(UAbilities* A, UAbilities* B)
{
	UAbilities* result = NewObject<UAbilities>();
	result->strength = A->strength - B->strength;
	result->constitution = A->constitution - B->constitution;
	result->dexterity = A->dexterity - B->dexterity;
	result->intelligence = A->intelligence - B->intelligence;
	result->wisdom = A->wisdom - B->wisdom;
	result->charisma = A->charisma - B->charisma;
	return result;
}

	
void UAbilities::SetAbilities(int strengthValue, int constitutionValue, int dexterityValue, int intelligenceValue, int wisdomValue, int charismaValue)
{
	strength = strengthValue;
	constitution = constitutionValue;
	dexterity = dexterityValue;
	intelligence = intelligenceValue;
	wisdom = wisdomValue;
	charisma = charismaValue;
}



