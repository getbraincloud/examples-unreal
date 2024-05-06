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
		Ret = "--";

	return FString::Printf(TEXT("region: %s, locale: %s, brainCloud: %s"), *Ret, *UBrainCloudFunctionLibrary::GetCountryCodeFromLocale(locale), *UBrainCloudFunctionLibrary::GetSystemCountryCode());
}

FString UMyBlueprintFunctionLibrary::GetCurrentRegion()
{
	FString CountryCode("");
	FCulturePtr culture = FInternationalization::Get().GetCurrentLocale();

	if (culture.IsValid())
		CountryCode = culture->GetRegion();

	return CountryCode;
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
