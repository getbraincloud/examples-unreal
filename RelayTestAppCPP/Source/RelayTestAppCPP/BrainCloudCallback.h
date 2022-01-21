// Fill out your copyright notice in the Description page of Project Settings.

/*
#pragma once

#include "CoreMinimal.h"
#include "IServerCallback.h"

#include <set>
/**
 * 
 #1#
class RELAYTESTAPPCPP_API BrainCloudCallback final : public IServerCallback
{
public:
	BrainCloudCallback(
		std::is_function<void(const FString response&)> callbackSuccess,
		std::is_function<void(const FString errorResponse&)> callbackError);

	static void DestroyAll();
	void Destroy();
	~BrainCloudCallback() {}

	std::is_function<void(const FString response&)> BraincloudSuccess;
	std::is_function<void(const FString errorResponse&)> BraincloudError;

	virtual void serverCallback(ServiceName &serviceName, ServiceOperation &serviceOperation, const FString &jsonData) override;

	virtual void serverError(ServiceName &serviceName, ServiceOperation &serviceOperation, int32 statusCode, int32 reasonCode, const FString &jsonError) override;
	
	static std::set<BrainCloudCallback*> bcCallbacks; 
};
*/
