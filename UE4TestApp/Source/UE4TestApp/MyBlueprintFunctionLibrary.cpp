// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
	FString Ret("");
	if (wrapper == nullptr) return Ret;
	  
    // add some developer code here
	FString locale = FPlatformMisc::GetDefaultLocale();

	FCulturePtr culture = FInternationalization::Get().GetCurrentLocale();

	if (culture.IsValid())
		Ret = culture->GetRegion();

	else
		Ret = "fooey";

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
}