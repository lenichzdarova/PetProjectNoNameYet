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
	SubscribeMembersEvents();
	abilities->AddStrength(10);
	abilities->AddConstitution(20);
	abilities->AddDexterity(30);
	abilities->AddIntelligence(40);
	abilities->AddWisdom(50);
	abilities->AddCharisma(60);
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
	auto dm = abilities->strength;	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Magenta,FString::FromInt(dm));
}
void UCharacterData::OnConstitutionChanged()
{
	auto dm = abilities->constitution;	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Magenta,FString::FromInt(dm));
}

void UCharacterData::OnDexterityChanged()
{
	auto dm = abilities->dexterity;	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Magenta,FString::FromInt(dm));
}

void UCharacterData::OnIntelligenceChanged()
{
	auto dm = abilities->intelligence;	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Magenta,FString::FromInt(dm));
}

void UCharacterData::OnWisdomChanged()
{
	auto dm = abilities->wisdom;	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Magenta,FString::FromInt(dm));
}

void UCharacterData::OnCharismaChanged()
{
	auto dm = abilities->charisma;	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Magenta,FString::FromInt(dm));
}

UAbilities* UCharacterData::GetAbilities()
{
	return abilities;
}








