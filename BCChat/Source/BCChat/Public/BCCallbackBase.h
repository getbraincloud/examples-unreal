// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IServerCallback.h"
#include "BrainCloudWrapper.h"
#include "ServiceName.h"
#include "ServiceOperation.h"

/**
 * 
 */
class BCCHAT_API BCCallbackBase : public IServerCallback
{
public:
	BCCallbackBase(UBrainCloudWrapper* in_wrapper, IServerCallback* in_callback);
	~BCCallbackBase();

	virtual void serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString& jsonData) override;
	virtual void serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode, const FString& jsonError) override;

protected:
	UBrainCloudWrapper* Wrapper;
	IServerCallback* Callback;
};
