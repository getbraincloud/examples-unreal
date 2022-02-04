// Fill out your copyright notice in the Description page of Project Settings.

#include "GameRelayCallback.h"
#include "BCBlueprintCallProxyBase.h"
#include "ServiceName.h"
#include "ServiceOperation.h"
#include "Widgets/GameWidget.h"


GameRelayCallback::GameRelayCallback(UBrainCloudWrapper *in_wrapper, IServerCallback *in_callback, class ARelayNetworkInterface *in_interface)
{
	Wrapper = in_wrapper;
	Callback = in_callback;
	Interface = in_interface;
}

void GameRelayCallback::serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString& jsonData)
{
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonData);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	bool bResponse = FJsonSerializer::Deserialize(reader, jsonPacket);
	if(!bResponse)
	{
		UE_LOG(LogTemp, Warning, TEXT("Server callback failed to deserialize jsonData"));
		delete this;
		return;
	}

	if (serviceName == ServiceName::AuthenticateV2 && serviceOperation == ServiceOperation::Authenticate)
	{
		TSharedPtr<FJsonObject> data = jsonPacket->GetObjectField(TEXT("data"));
		FString profileId = data->GetStringField(TEXT("profileId"));

		if (!profileId.IsEmpty())
		{
			Interface->LocalProfileID = profileId;
		}
		Interface->AuthenticateCallback();
		delete this;
	}
	else if(serviceName == ServiceName::RTTRegistration)
	{
		Interface->FindLobby();
		//callback will get deleted when RTT is disabled which will be within serverError callback
	}
	else if(serviceName == ServiceName::Lobby)
	{
		if(serviceOperation == ServiceOperation::CancelFindRequest)
		{
			Interface->StartLoadingTimer();	
		}
		delete this;
	}
}

void GameRelayCallback::serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode,
	const FString& jsonError)
{
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(jsonError);
	TSharedPtr<FJsonObject> jsonPacket = MakeShareable(new FJsonObject());
	FJsonSerializer::Deserialize(reader, jsonPacket);
	if(jsonPacket->HasField("statusMessage"))
	{
		FString message = jsonPacket->GetStringField(TEXT("statusMessage"));
		if(message.Equals(TEXT("DisableRTT Called")))
		{
			delete this;
			return;
		}
	}
	//Setting up error message for pop up screen
	FString middleString = " |||| JSON ERROR: ";
	FString appendString = serviceOperation.getValue() + middleString + jsonError; 
	const FText errorMessage = FText::AsCultureInvariant(appendString);
	Interface->GameInstance->GameWidget->SetUpPopUp(errorMessage);
	delete this;
}
