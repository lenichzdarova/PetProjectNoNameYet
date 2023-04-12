// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDataProvidersLibrary.h"
#include "DwarvenToughness.h"

UAbilities* UBaseDataProvidersLibrary::GetBaseRaceAbilities(ERaceNames race)
{
	UAbilities* result = NewObject<UAbilities>();
	switch (race)
	{
	case Dwarf:
		result->Set(10,10,10,10,10,10);
		break;
	case Elf:
		result->Set(10,10,10,10,10,10);
		break;
	case Gnome:
		result->Set(10,10,10,10,10,10);
		break;		
	case Halfling:
		result->Set(10,10,10,10,10,10);
		break;
	case Human:
		result->Set(10,10,10,10,10,10);
		break;
	case Orc:
		result->Set(10,10,10,10,10,10);
		break;
		default:
			result->Set(10,10,10,10,10,10);
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
		break;
		default:;
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
		break;
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
		default:;
	}
	return result;
}
TSet<UFeat*> UBaseDataProvidersLibrary::GetRaceBaseFeats(ERaceNames race)
{
	TSet<UFeat*> result;
	switch (race)
	{
	case Dwarf:
		result.Add(NewObject<UDwarvenToughness>());
		break;
	case Elf:
		break;
	case Gnome:
		break;
	case Halfling:
		break;
	case Human:
		break;
	case Orc:
		break;
		default:;			
	}
	return result;
}



