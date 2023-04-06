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
