// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
    if (wrapper == nullptr) return FString();

    // add some developer code here

	//todo: how do we make this work?
    //FInternationalization::Get().LoadAllCultureData();

    FString Ret("");
    FString Out("");

    Out += "\nREGION!\n";
    Out += FString::Printf(TEXT("[%s] UBrainCloudFunctionLibrary::GetSystemCountryCode() \n"), *UBrainCloudFunctionLibrary::GetSystemCountryCode());


    FString locale = FGenericPlatformMisc::GetDefaultLocale();
    Out += FString::Printf(TEXT("[%s] FGenericPlatformMisc::GetDefaultLocale()\n"), *locale);

    locale = FPlatformMisc::GetDefaultLocale();
    Out += FString::Printf(TEXT("[%s] FPlatformMisc::GetDefaultLocale()\n"), *locale);
    
	FCulturePtr culture = FInternationalization::Get().GetCulture(locale);

    if (culture.IsValid()) {
        Out += FString::Printf(TEXT("[%s] FInternationalization::Get().GetCulture(locale)->GetName()\n[%s] FInternationalization::Get().GetCulture(locale)->GetRegion()\n"), *(culture->GetName()), *(culture->GetRegion()));
        Out += FString::Printf(TEXT("[%s] FInternationalization::Get().GetCulture(locale)->GetDisplayName()\n[%s] FInternationalization::Get().GetCulture(locale)->GetNativeName()\n"), *(culture->GetDisplayName()), *(culture->GetNativeName()));
    }
    else {
        Out += "culture invalid";
    }

    culture = FInternationalization::Get().GetCurrentLocale();

    if (culture.IsValid()) {

        Out += FString::Printf(TEXT("[%s] FInternationalization::Get().GetCurrentLocale()->GetName()\n[%s] FInternationalization::Get().GetCurrentLocale()->GetRegion()\n"), *(culture->GetName()), *(culture->GetRegion()));
        Out += FString::Printf(TEXT("[%s] FInternationalization::Get().GetCurrentLocale()->GetDisplayName()\n[%s] FInternationalization::Get().GetCurrentLocale()->GetNativeName()\n"), *(culture->GetDisplayName()), *(culture->GetNativeName()));
    }
    else {
        Out += "culture invalid\n";
    }

    Out += "\nLANGUAGE!\n";
    Out += FString::Printf(TEXT("[%s] UBrainCloudFunctionLibrary::GetSystemLanguageCode()\n"), *UBrainCloudFunctionLibrary::GetSystemLanguageCode());

    FString lang = FGenericPlatformMisc::GetDefaultLanguage();
    Out += FString::Printf(TEXT("[%s] FGenericPlatformMisc::GetDefaultLanguage()\n"), *lang);

    lang = FPlatformMisc::GetDefaultLanguage();

    Out += FString::Printf(TEXT("[%s] FPlatformMisc::GetDefaultLanguage()\n"), *lang);

    culture = FInternationalization::Get().GetCurrentLanguage();

    if (culture.IsValid()) {

        Out += FString::Printf(TEXT("[%s] FInternationalization::Get().GetCurrentLanguage()->GetName()\n"), *(culture->GetName()));
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

        Out += FString::Printf(TEXT("[%s] locale input\n[%s] FInternationalization::Get().GetCulture(locale)->GetName()\n[%s] FInternationalization::Get().GetCulture(locale)->GetRegion()\n"), *locale, *(culture->GetName()), *(culture->GetRegion()));
        Out += FString::Printf(TEXT("[%s] FInternationalization::Get().GetCulture(locale)->GetDisplayName()\n[%s] FInternationalization::Get().GetCulture(locale)->GetNativeName()\n"), *(culture->GetDisplayName()), *(culture->GetNativeName()));
        FString code = UBrainCloudFunctionLibrary::SplitCountryCodeFromLocale(locale);
        Out += FString::Printf(TEXT("[%s] UBrainCloudFunctionLibrary::SplitCountryCodeFromLocale()\n[%s] UBrainCloudFunctionLibrary::FormatCountryCode()\n"), *code, *UBrainCloudFunctionLibrary::FormatCountryCode(code));
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
