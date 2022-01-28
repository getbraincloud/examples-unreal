// Fill out your copyright notice in the Description page of Project Settings.


#include "RelayGameInstance.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "RelayTestAppCPP/RelayNetworkInterface.h"
#include "RelayTestAppCPP/Widgets/GameWidget.h"

URelayGameInstance::URelayGameInstance()
{
	bIsReliable = false;
	bIsOrdered = false;
	bIsLoading = false;
	SaveSlotName = "RelayTestAppSave";
	UserIndex = 0;
}

void URelayGameInstance::SetUpLoadingScreen(int in_widgetIndex, FText in_message, bool in_bCancelButtonEnabled)
{
	//Set the index for after loading screen is finished
	NextWidgetIndex = in_widgetIndex;
	AdjustCancelButtonVisibility(in_bCancelButtonEnabled);
	//Setting Message for loading screen
	GameWidget->LoadingScreenWidget->LoadingMessage->SetText(in_message);

	//Change widget view to loading screen
	GameWidget->WidgetSwitcher->SetActiveWidgetIndex(0);
	bIsLoading = true;
}

void URelayGameInstance::AdjustCancelButtonVisibility(bool in_bIsVisible)
{
	if(in_bIsVisible)
	{
		GameWidget->LoadingScreenWidget->Cancel_Button->SetVisibility(ESlateVisibility::Visible);	
	}
	else
	{
		GameWidget->LoadingScreenWidget->Cancel_Button->SetVisibility(ESlateVisibility::Hidden);
	}
}

void URelayGameInstance::FinishedLoading(bool in_bIsNextStateCancelled)
{
	//If cancelled, go back to main menu widget which should be index 2
	if(in_bIsNextStateCancelled)
	{
		GameWidget->WidgetSwitcher->SetActiveWidgetIndex(0);
		
		//ToDo: Check what the next widget index is to determine if Cancelling to Find lobby or Cancelling Joining Match
		if(NextWidgetIndex <= 3)
		{
			//Cancel Find Lobby
		}
		else
		{
			//Cancel Joining Match
		}
	}
	else
	{
		GameWidget->WidgetSwitcher->SetActiveWidgetIndex(NextWidgetIndex);
		CurrentWidgetIndex = NextWidgetIndex;
	}
}

void URelayGameInstance::SaveGameUserColor(FLinearColor in_Color, int in_ArrowColorIndex)
{
	SaveGameInstance->LocalUserColor = in_Color;
	SaveGameInstance->ArrowColorIndex = in_ArrowColorIndex;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
}

void URelayGameInstance::SaveGameUserSignInEntry(FText in_Username, FText in_Password)
{
	SaveGameInstance->LocalUsername = in_Username;
	SaveGameInstance->LocalPassword = in_Password;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
}

void URelayGameInstance::LoadGame()
{
	SaveGameInstance = Cast<URelaySaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName,UserIndex));
	if(SaveGameInstance == nullptr)
	{
		SaveGameInstance = Cast<URelaySaveGame>(UGameplayStatics::CreateSaveGameObject(URelaySaveGame::StaticClass()));
		UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);

		UE_LOG(LogTemp, Warning, TEXT("New Save Instance"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Save Data Loaded"));
	}
}

void URelayGameInstance::CreateLocalUser(FText in_LocalUsername, FText in_LocalPassword)
{
	//Create user for widgets to use
	LocalUser = NewObject<URelayUserData>();
	LocalUser->Initialize(in_LocalUsername, SaveGameInstance->LocalUserColor, Interface->LocalProfileID);
	
	//Save info of local player
	SaveGameInstance->LocalUsername = in_LocalUsername;
	SaveGameInstance->LocalPassword = in_LocalPassword;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,SaveSlotName,UserIndex);
	UE_LOG(LogTemp, Warning, TEXT("Local User Created"));
}

void URelayGameInstance::AdjustShockwaveVisibility(FString in_ProfileID, bool in_IsVisible)
{
	
}

URelayUserData* URelayGameInstance::CreateUserAndAddToList(FText in_NewUsername, FLinearColor in_NewUserColor, FString in_NewProfileID, int in_arrayIndex)
{
	URelayUserData* newUser = NewObject<URelayUserData>(this);
	newUser->Initialize(in_NewUsername, in_NewUserColor, in_NewProfileID);
	ListOfUserObjects[in_arrayIndex] = newUser;

	GameWidget->LobbyWidget->Lobby_ListView->AddItem(newUser);
	GameWidget->MatchWidget->Match_UserListView->AddItem(newUser);
	
	return newUser;
}
