// Fill out your copyright notice in the Description page of Project Settings.

#include "GameRelayCallback.h"

#include "BCBlueprintCallProxyBase.h"
#include "ServiceName.h"
#include "ServiceOperation.h"


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
	bool res = FJsonSerializer::Deserialize(reader, jsonPacket);

	FBC_ReturnData returnData = FBC_ReturnData(serviceName.getValue(), serviceOperation.getValue(), 200, 0);

	if (serviceName == ServiceName::AuthenticateV2 && serviceOperation == ServiceOperation::Authenticate)
	{
		FString profileId = TEXT("");

		if (res)
		{
			TSharedPtr<FJsonObject> data = jsonPacket->GetObjectField(TEXT("data"));
			profileId = data->GetStringField(TEXT("profileId"));
		}

		if (profileId != TEXT(""))
		{
			//setStoredProfileId(profileId);
			Interface->LocalProfileID = profileId;
		}
		Interface->AuthenticateCallback();
	}

	UE_LOG(LogTemp,Log,TEXT("Server Callback"));
	delete this;
}

void GameRelayCallback::serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode,
	const FString& jsonError)
{
	Callback->serverError(serviceName, serviceOperation, statusCode, reasonCode, jsonError);
	delete this;
}
