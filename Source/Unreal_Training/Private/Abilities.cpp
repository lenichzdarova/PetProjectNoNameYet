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
	
UAbilities* UAbilities::Set(int strengthValue, int constitutionValue, int dexterityValue, int intelligenceValue, int wisdomValue, int charismaValue)
{
	strength = strengthValue;
	constitution = constitutionValue;
	dexterity = dexterityValue;
	intelligence = intelligenceValue;
	wisdom = wisdomValue;
	charisma = charismaValue;
	return this;
}

bool UAbilities::EqualityCheck(UAbilities* A, UAbilities* B)
{
	if (A->strength == B->strength &&
		A->constitution == B->constitution &&
		A->dexterity == B->dexterity &&
		A->intelligence == B->intelligence &&
		A->wisdom == B->wisdom &&
		A->charisma == B->charisma)
	{
		return true;
	}
	return false;
}

void UAbilities::SetStrength(int value)
{
	strength = value;
	StrengthChanged.Broadcast();
}
void UAbilities::SetConstitution(int value)
{
	constitution = value;
	ConstitutionChanged.Broadcast();
}
void UAbilities::SetDexterity(int value)
{
	dexterity = value;
	DexterityChanged.Broadcast();
}
void UAbilities::SetIntelligence(int value)
{
	intelligence = value;
	IntelligenceChanged.Broadcast();
}
void UAbilities::SetWisdom(int value)
{
	wisdom = value;
	WisdomChanged.Broadcast();
}
void UAbilities::SetCharisma(int value)
{
	charisma = value;
	CharismaChanged.Broadcast();
}

void UAbilities::AddStrength(int value)
{
	strength += value;
	StrengthChanged.Broadcast();
}
void UAbilities::AddConstitution(int value)
{
	constitution += value;
	ConstitutionChanged.Broadcast();
}
void UAbilities::AddDexterity(int value)
{
	dexterity += value;
	DexterityChanged.Broadcast();
}
void UAbilities::AddIntelligence(int value)
{
	intelligence += value;
	IntelligenceChanged.Broadcast();
}
void UAbilities::AddWisdom(int value)
{
	wisdom += value;
	WisdomChanged.Broadcast();
}
void UAbilities::AddCharisma(int value)
{
	charisma += value;
	CharismaChanged.Broadcast();
}






