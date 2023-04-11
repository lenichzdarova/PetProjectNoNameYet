// Fill out your copyright notice in the Description page of Project Settings.


#include "ExperienceHandler.h"

int UExperienceHandler::GetCharacterLevel()
{	
	return professionProgress.Num();
}
void UExperienceHandler::Set(TArray<TEnumAsByte<EProfessionNames>> characterProgress, int currentExperienceValue)
{
	currentExperience = currentExperienceValue;
	experienceToNExtLevel = characterProgress.Num() * 1000;	
	for (int i = 0; i < characterProgress.Num();++i)
	{
		professionProgress.Add(i+1, characterProgress[i]);
	}
}

