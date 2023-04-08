// Fill out your copyright notice in the Description page of Project Settings.


#include "Dices.h"
#include "Math/UnrealMathUtility.h"

int UDices::Roll()const
{	
	return FMath::RandRange(rolls, rolls*faces);	
}
int UDices::GetMaxRoll()const
{
	return rolls*faces;
}
int UDices::GetMinRoll()const
{
	return rolls;
}
UDices* UDices::Set(int rollCount, int facesValue)
{
	rolls = rollCount;
	faces = facesValue;
	return this;
}
FString UDices::Print()const
{	 
	return FString(rolls +"D" +faces);
}




