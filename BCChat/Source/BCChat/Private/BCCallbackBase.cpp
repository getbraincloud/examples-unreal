// Fill out your copyright notice in the Description page of Project Settings.


#include "BCCallbackBase.h"

BCCallbackBase::BCCallbackBase(UBrainCloudWrapper* in_wrapper, IServerCallback* in_callback)
{
	Wrapper = in_wrapper;
	Callback = in_callback;
}

BCCallbackBase::~BCCallbackBase()
{
}

void BCCallbackBase::serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString& jsonData)
{
}

void BCCallbackBase::serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode, const FString& jsonError)
{
}
