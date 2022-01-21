// Fill out your copyright notice in the Description page of Project Settings.


#include "BrainCloudCallback.h"

/*std::set<BrainCloudCallback*> BrainCloudCallback::bcCallbacks;

BrainCloudCallback::BrainCloudCallback(std::is_function<void(const FString response)> callbackSuccess&, std::is_function<void(const FString errorResponse)> callbackError&)
	:BraincloudSuccess(callbackSuccess),BraincloudError(callbackError)
{
	bcCallbacks.insert(this);
}

void BrainCloudCallback::DestroyAll()
{
	for(auto CurrentCallback:bcCallbacks)
	{
		delete CurrentCallback;
	}
	bcCallbacks.clear();
}

void BrainCloudCallback::Destroy()
{
	auto callback = bcCallbacks.find(this);
	if(callback != bcCallbacks.end())
	{
		bcCallbacks.erase(callback);
	}
	delete this;
}

void BrainCloudCallback::serverCallback(ServiceName& serviceName, ServiceOperation& serviceOperation, const FString& jsonData)
{
	if(BraincloudSuccess)
	{
		//Decode jsonData to then call into BraincloudSuccess... how? I DONT KNOW
	}
	Destroy();
}

void BrainCloudCallback::serverError(ServiceName& serviceName, ServiceOperation& serviceOperation, int32 statusCode, int32 reasonCode,
	const FString& jsonError)
{
	if(BraincloudError)
	{
		//Decode jsonData to then call into BraincloudError... how? I DONT KNOW...One step at a time...
	}
	Destroy();
}*/
