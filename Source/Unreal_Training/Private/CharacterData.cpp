// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterData.h"

void UCharacterData::Set(TEnumAsByte<ERaceNames> raceValue, UFeatsHandler* featsHandlerValue, UEffectsHandler* effectsHandlerValue,
	UAbilities* abilitiesValue, UExperienceHandler* experienceHandlerValue)
{
	race = raceValue;
	featsHandler = featsHandlerValue;
	effectsHandler = effectsHandlerValue;
	abilities = abilitiesValue;
	experienceHandler = experienceHandlerValue;
}
