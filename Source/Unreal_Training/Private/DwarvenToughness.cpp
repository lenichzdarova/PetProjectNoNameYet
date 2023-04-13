// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarvenToughness.h"

void UDwarvenToughness::ApplyFeat(UCharacterData* character)
{	
	UHealthHandler* health = character->Execute_GetHealth(character);	
	health->AddBonusPerLevel(healthPerLevelBonus);	
}

void UDwarvenToughness::DiscardFeat(UCharacterData* character)
{	
	UHealthHandler* health = character->Execute_GetHealth(character);	
	health->AddBonusPerLevel(-healthPerLevelBonus);
}

