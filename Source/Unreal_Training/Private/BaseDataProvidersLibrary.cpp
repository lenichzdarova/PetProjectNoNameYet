// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDataProvidersLibrary.h"

UAbilities* UBaseDataProvidersLibrary::GetBaseRaceAbilities(ERaceNames race)
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
int UBaseDataProvidersLibrary::GetBaseAttackBonus(EProfessionNames profession, int level)
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
UDices* UBaseDataProvidersLibrary::GetBaseHealthBonus(EProfessionNames profession)
{
	UDices* result = NewObject<UDices>();
	switch (profession)
	{
	case Warrior:
		result->Set(1,12);		
	case Paladin:
		result->Set(1,10);
		break;
	case Ranger: case Monk:
		result->Set(1,8);
		break;
	case Rogue:
		result->Set(1,6);
		break;
	case Wizard:
		result->Set(1,4);
		break;		
	}
	return result;
}

