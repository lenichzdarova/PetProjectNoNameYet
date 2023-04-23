// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnHandler.h"

void UTurnHandler::MakeTurn()
{
	if(status != NotReady)
	{
		FTimerHandle handle;
		FTimerDelegate timerDelegate;
		timerDelegate.BindUFunction(this,FName("NewTurn"));	
		UObject* outer = GetOuter();	
		while(outer)
		{
			UWorld* world = outer->GetWorld();		
			if(world)
			{			
				world->GetTimerManager().SetTimer(handle, timerDelegate, BaseTurnTime,false);					
				break;
			}
			outer = outer->GetOuter();		
		}	
		SetStatus(NotReady);
	}	
}

void UTurnHandler::NewTurn()
{
	SetStatus(Ready);
}

void UTurnHandler::SetStatus(EReadyness value)
{
	status = value;
	StatusChange.Broadcast();
}


