// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticProvidersLibrary.h"

UAbilities* UStaticProvidersLibrary::GetBaseRaceAbilities(ERaceNames race)
{
	UAbilities* result = NewObject<UAbilities>();
	switch (race)
	{
	case Dwarf:
		result->SetAbilities(10,10,10,10,10,10);
		break;
	case Elf:
		result->SetAbilities(10,10,10,10,10,10);
		break;
	case Gnome:
		result->SetAbilities(10,10,10,10,10,10);
		break;		
	case Halfling:
		result->SetAbilities(10,10,10,10,10,10);
		break;
	case Human:
		result->SetAbilities(10,10,10,10,10,10);
		break;
	case Orc:
		result->SetAbilities(10,10,10,10,10,10);
		break;
		default:
			result->SetAbilities(10,10,10,10,10,10);
	}
	return result;
}
int UStaticProvidersLibrary::GetBaseAttackBonus(EProfessionNames profession, int level)
{
	double	progressionBonus(0);
	switch (profession)
	{
	case Warrior: case Paladin: case Ranger:
		progressionBonus = 1;
		break;
	case Rogue: case Monk:
		progressionBonus = 0.75;
		break;
	case Wizard:
		progressionBonus = 0.5;
	}
	return level*progressionBonus;
}
