// Fill out your copyright notice in the Description page of Project Settings.


#include "BCHelpers.h"
#include "BCFPS.h"
#include "BrainCloudClient.h"
#include "BrainCloudWrapper.h"

UBCHelpers::UBCHelpers(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FBrainCloudInitParams UBCHelpers::InitializeFromHeader()
{
	FBrainCloudInitParams params;

	return params;
}

TArray<uint8> UBCHelpers::ConvertStringToBytes(FString inputString)
{
	uint32 size = inputString.Len();
	TArray<uint8> data;
	data.AddUninitialized(size);
	StringToBytes(inputString, data.GetData(), size);

	return data;
}

FString UBCHelpers::ConvertBytesToString(TArray<uint8> inputBytes)
{
	return BytesToString(inputBytes.GetData(), inputBytes.Num());
}

bool UBCHelpers::FieldHasValue(FString json, FString field)
{
	TSharedPtr<FJsonObject> jsonObject = GetJsonData(json);
	auto value = jsonObject->TryGetField(field);
	if(value != nullptr && value.IsValid() && value.Get()->Type != EJson::Null)
	{
		return true;
	}
	return false;
}

TSharedPtr<FJsonObject> UBCHelpers::GetJsonData(FString json)
{
	TSharedRef<TJsonReader<>> reader = TJsonReaderFactory<>::Create(json);
		TSharedPtr<FJsonObject> jsonValue = MakeShareable(new FJsonObject());
	FJsonSerializer::Deserialize(reader, jsonValue);
	TSharedPtr<FJsonObject> data = jsonValue->GetObjectField("data");
	return data;
}
