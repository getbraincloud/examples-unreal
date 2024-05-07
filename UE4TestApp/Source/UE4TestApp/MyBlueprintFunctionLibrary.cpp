// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
	FString Ret("");
	FString Out("");

	if (wrapper == nullptr) return Out;
	  
    // add some developer code here
	Out += "REGION!\n";
	Out += FString::Printf(TEXT("UBrainCloudFunctionLibrary::GetSystemCountryCode(): [%s]\n"), *UBrainCloudFunctionLibrary::GetSystemCountryCode());


	FString locale = FPlatformMisc::GetDefaultLocale();
	Out += FString::Printf(TEXT("FPlatformMisc::GetDefaultLocale(): [%s]\n"), *locale);
	FString code = UBrainCloudFunctionLibrary::SplitCountryCodeFromLocale(locale);
	Out += FString::Printf(TEXT("UBrainCloudFunctionLibrary::GetCountryCodeFromCulture(): [%s], SplitCountryCodeFromLocale(): [%s], FormatCountryCode(): [%s]\n"), *UBrainCloudFunctionLibrary::GetCountryCodeFromCulture(locale), *UBrainCloudFunctionLibrary::SplitCountryCodeFromLocale(locale), *UBrainCloudFunctionLibrary::FormatCountryCode(code));

	FCulturePtr culture = FInternationalization::Get().GetCurrentLocale();

	if (culture.IsValid()) {

		Out += FString::Printf(TEXT("FInternationalization::Get().GetCurrentLocale()->GetName(): [%s], ->GetRegion(): [%s]\n"), *(culture->GetName()), *(culture->GetRegion()));
	}
	else {
		Out += "culture invalid\n";
	}


	Out += "LANGUAGE!\n";
	Out += FString::Printf(TEXT("UBrainCloudFunctionLibrary::GetSystemLanguageCode() [%s]\n"), *UBrainCloudFunctionLibrary::GetSystemLanguageCode());


	FString lang = FPlatformMisc::GetDefaultLanguage();

	Out += FString::Printf(TEXT("FPlatformMisc::GetDefaultLanguage(): [%s]\n"), *lang);


	culture = FInternationalization::Get().GetCurrentLanguage();

	if (culture.IsValid()) {

		Out += FString::Printf(TEXT("FInternationalization::Get().GetCurrentLanguage()->GetName(): [%s], ->GetRegion(): [%s]\n"), *(culture->GetName()));
	}
	else {
		Out += "culture invalid\n";
	}

	return Out;
}

FString UMyBlueprintFunctionLibrary::PrintRegionFromLocale(FString locale)
{
	FString Out("");

	FCulturePtr culture = FInternationalization::Get().GetCulture(locale);

	if (culture.IsValid()) {

		Out += FString::Printf(TEXT("locale: [%s]\nFInternationalization::Get().GetCulture(locale)->GetName(): [%s], ->GetRegion(): [%s]\n"), *locale, *(culture->GetName()), *(culture->GetRegion()));
		FString code = UBrainCloudFunctionLibrary::SplitCountryCodeFromLocale(locale);
		Out += FString::Printf(TEXT("UBrainCloudFunctionLibrary::GetCountryCodeFromCulture(): [%s], SplitCountryCodeFromLocale(): [%s], FormatCountryCode(): [%s]"), *UBrainCloudFunctionLibrary::GetCountryCodeFromCulture(locale), *UBrainCloudFunctionLibrary::SplitCountryCodeFromLocale(locale), *UBrainCloudFunctionLibrary::FormatCountryCode(code));
	}
	else {
		Out += "culture invalid";
	}
	return Out;
}

FString UMyBlueprintFunctionLibrary::GetCurrentRegion()
{
	FString CountryCode("--");
	FCulturePtr culture = FInternationalization::Get().GetCurrentLocale();

	if (culture.IsValid()) {
		CountryCode = culture->GetRegion();
	}

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
