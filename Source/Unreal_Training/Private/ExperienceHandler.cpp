// Fill out your copyright notice in the Description page of Project Settings.


#include "ExperienceHandler.h"

int UExperienceHandler::GetCharacterLevel()
{	
	return professionProgress.Num();
}
void UExperienceHandler::Set(TArray<TEnumAsByte<EProfessionNames>> characterProgress, int currentExperienceValue)
{
	currentExperience = currentExperienceValue;
	experienceToNExtLevel = characterProgress.Num() * experiencePerLevel;	
	for (int i = 0; i < characterProgress.Num();++i)
	{
		professionProgress.Add(i+1, characterProgress[i]);
	}
}

void UExperienceHandler::AddExperience(int value)
{
	currentExperience += value;
	if(currentExperience >= experienceToNExtLevel)
	{
		AddLevelUp(1);
		currentExperience -= experienceToNExtLevel;
		SetExperienceToNextLevel();
	}
	CurrentExperienceChanged.Broadcast();
}
void UExperienceHandler::SetExperienceToNextLevel()
{
	experienceToNExtLevel = experiencePerLevel * GetCharacterLevel();
	ExperienceToNextLevelChanged.Broadcast();
}

void UExperienceHandler::AddLevelUp(int value)
{
	levelUpPoints += value;
	LevelUpPointsChanged.Broadcast();
}

void UExperienceHandler::RemoveLevelUp(int value)
{
	levelUpPoints -= value;
	LevelUpPointsChanged.Broadcast();
}






