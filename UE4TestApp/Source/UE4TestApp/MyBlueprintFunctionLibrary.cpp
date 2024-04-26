// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"


FString UMyBlueprintFunctionLibrary::RunCppFunction(UBrainCloudWrapper* wrapper)
{
    // add some developer code here
	FString Ret;
	if(wrapper != nullptr)
	    Ret = FString::Printf(TEXT("Wrapper initialized"));

	 return Ret;
}
	
FString UMyBlueprintFunctionLibrary::GetMyLanguageCode()
{
	FString LanguageCode;
	
	return LanguageCode;
}	
FString UMyBlueprintFunctionLibrary::GetMyCountryCode()
{
	FString CountryCode;


	return CountryCode;
}

float UMyBlueprintFunctionLibrary::GetMyTimeZone()
{
	float timezoneoffset = 0.0f;

	return timezoneoffset;
}
