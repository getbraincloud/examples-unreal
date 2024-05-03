// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
	FString Ret("");
	if (wrapper == nullptr) return Ret;
	  
    // add some developer code here
	FString locale = FPlatformMisc::GetDefaultLocale();

	FCulturePtr culture = FInternationalization::Get().GetCulture(locale);

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

	if (CountryCode.IsEmpty() && wrapper->getClient()->getCountryCode().IsEmpty()) {
		// this is already the default brainCloud client initialization
		// see FSonyPlatformMisc::GetDefaultLocale()
		FString locale = FPlatformMisc::GetDefaultLocale();
		
		FString language, country;
		locale.Split(TEXT("-"), &language, &country);

		if (country.IsEmpty())
			CountryCode = language;
		else 
			CountryCode = country;
		
		if (CountryCode == "419") {
			CountryCode = "_LA_";
		}
		else if ((CountryCode == "Hans") || (CountryCode == "Hant")) {
			CountryCode = "CN";
		}
	}

	CountryCode = CountryCode.ToUpper();
	wrapper->getClient()->overrideCountryCode(CountryCode);
}


