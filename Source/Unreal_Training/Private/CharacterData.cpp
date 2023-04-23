// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterData.h"

void UCharacterData::Set(TEnumAsByte<ERaceNames> raceValue, UTexture2D* portraitImage, UFeatsHandler* featsHandlerValue,
	UEffectsHandler* effectsHandlerValue, UAbilities* abilitiesValue, UExperienceHandler* experienceHandlerValue, UHealthHandler* healthHandlerValue)
{
	race = raceValue;
	portrait = portraitImage;
	featsHandler = featsHandlerValue;
	effectsHandler = effectsHandlerValue;	
	experienceHandler = experienceHandlerValue;
	abilities = abilitiesValue;
	healthHandler = healthHandlerValue;
	turnHandler = NewObject<UTurnHandler>(this);
	SubscribeMembersEvents();	
}

void UCharacterData::SubscribeMembersEvents()
{
	TScriptDelegate<FWeakObjectPtr> strengthDelegate;
	TScriptDelegate<FWeakObjectPtr> constitutionDelegate;
	TScriptDelegate<FWeakObjectPtr> dexterityDelegate;
	TScriptDelegate<FWeakObjectPtr> intelligenceDelegate;
	TScriptDelegate<FWeakObjectPtr> wisdomDelegate;
	TScriptDelegate<FWeakObjectPtr> charismaDelegate;
	
	strengthDelegate.BindUFunction(this,"OnStrengthChanged");
	abilities->StrengthChanged.Add(strengthDelegate);
	
	constitutionDelegate.BindUFunction(this,"OnConstitutionChanged");
	abilities->ConstitutionChanged.Add(constitutionDelegate);
	
	dexterityDelegate.BindUFunction(this,"OnDexterityChanged");
	abilities->DexterityChanged.Add(dexterityDelegate);

	
	intelligenceDelegate.BindUFunction(this,"OnIntelligenceChanged");
	abilities->IntelligenceChanged.Add(intelligenceDelegate);
	
	wisdomDelegate.BindUFunction(this,"OnWisdomChanged");
	abilities->WisdomChanged.Add(wisdomDelegate);
	
	charismaDelegate.BindUFunction(this,"OnCharismaChanged");
	abilities->CharismaChanged.Add(charismaDelegate);	
}

void UCharacterData::OnStrengthChanged()
{
	
}
void UCharacterData::OnConstitutionChanged()
{
	
}

void UCharacterData::OnDexterityChanged()
{
	
}

void UCharacterData::OnIntelligenceChanged()
{
	
}

void UCharacterData::OnWisdomChanged()
{
	
}

void UCharacterData::OnCharismaChanged()
{
	
}

UAbilities* UCharacterData::GetAbilities()
{
	return abilities;
}

UHealthHandler* UCharacterData::GetHealth_Implementation()
{
	return healthHandler;
}

UFeatsHandler* UCharacterData::GetFeats()
{
	return featsHandler;
}

void UCharacterData::PerformAction()
{
	turnHandler->MakeTurn();
}

UTurnHandler* UCharacterData::GetTurnHandler()
{
	return turnHandler;
}
















