// Fill out your copyright notice in the Description page of Project Settings.


#include "FeatsHandler.h"

const TSet<TEnumAsByte<EFeatNames>>& UFeatsHandler::GetFeats()
{
	return activeFeats;
}

void UFeatsHandler::AddFeat(EFeatNames feat)
{
	activeFeats.Add(feat);
	FeatsChanged.Broadcast();
}

void UFeatsHandler::RemoveFeat(EFeatNames feat)
{
	activeFeats.Remove(static_cast<TEnumAsByte<EFeatNames>>(feat));	
	FeatsChanged.Broadcast();
}