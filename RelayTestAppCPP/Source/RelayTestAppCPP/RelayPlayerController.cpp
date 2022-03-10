// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayPlayerController.h"

void ARelayPlayerController::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<URelayGameInstance>(GetGameInstance());
}

void ARelayPlayerController::ChangeCursorTexture(bool in_changeToNormal)
{
	if(in_changeToNormal)
	{
		CurrentMouseCursor = EMouseCursor::Default;
	}
	else
	{
		if(!ensure(GameInstance != nullptr))
		{
			GameInstance = Cast<URelayGameInstance>(GetGameInstance());
		}
		FString arrowPath = TEXT("ArtResources/arrow") + FString::FromInt(GameInstance->SaveGameInstance->ArrowColorIndex);
		FName arrowPathName = FName(arrowPath);
		GetWorld()->GetGameViewport()->SetHardwareCursor(EMouseCursor::TextEditBeam, arrowPathName, FVector2D(0.25,0));
		CurrentMouseCursor = EMouseCursor::TextEditBeam;
	}
}
