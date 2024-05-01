// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
	FString Ret("");
	if(wrapper != nullptr)
	    Ret = FString::Printf(TEXT("Wrapper initialized"));
    // add some developer code here

	 return Ret;
}

FString UMyBlueprintFunctionLibrary::GetCountryOverride()
{

	FString CountryCode("");
	// add some developer code here
	return CountryCode;
}

void UMyBlueprintFunctionLibrary::RunCppCountryOverride(UBrainCloudWrapper* wrapper)
{

	if (wrapper == nullptr) return;

	FString CountryCode("");
	// add some developer code here

	if (!CountryCode.IsEmpty()) {
		wrapper->getClient()->overrideCountryCode(CountryCode);
	}
	else if(wrapper->getClient()->getCountryCode().IsEmpty()) {
		// this is also the brainCloudF client default
		wrapper->getClient()->overrideCountryCode(FPlatformMisc::GetDefaultLocale());
	}
}

