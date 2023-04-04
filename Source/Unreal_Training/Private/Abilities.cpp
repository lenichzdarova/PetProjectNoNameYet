// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities.h"

UAbilities* UAbilities::AddAbilities(UAbilities* A, UAbilities* B)
{
	UAbilities* result = NewObject<UAbilities>();
	result->strength = A->strength + B->strength;
	result->constitution = A->constitution + B->constitution;
	result->dexteity = A->dexteity + B->dexteity;
	result->intelligence = A->intelligence + B->intelligence;
	result->wisdom = A->wisdom + B->wisdom;
	result->charisma = A->charisma + B->charisma;
	return result;
}


