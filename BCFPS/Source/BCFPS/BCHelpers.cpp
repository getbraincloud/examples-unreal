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

FBrainCloudInitParams UBCHelpers::InitializeFromFile()
{
	FBrainCloudInitParams params;

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString projectDir = FPaths::ProjectDir();
	FString filePath = FPaths::Combine(*FPaths::ProjectDir(), TEXT("ids.txt"));

	if (platformFile.FileExists(*filePath))
	{
		FString file;
		FFileHelper::LoadFileToString(file, *filePath);

		TArray<FString> lines;
		file.ParseIntoArray(lines, TEXT("\n"), true);

		for (int32 i = 0; i < lines.Num(); i++)
		{
			FString line = lines[i];

			if (line.StartsWith("serverUrl"))
			{
				line.Split(TEXT("="), nullptr, &params.ServerUrl);
				params.ServerUrl.TrimEndInline();
			}
			else if (line.StartsWith("appId"))
			{
				line.Split(TEXT("="), nullptr, &params.AppId);
				params.AppId.TrimEndInline();
			}
			else if (line.StartsWith("secret"))
			{
				line.Split(TEXT("="), nullptr, &params.Secret);
				params.Secret.TrimEndInline();
			}
			else if (line.StartsWith("version"))
			{
				line.Split(TEXT("="), nullptr, &params.Version);
				params.Version.TrimEndInline();
			}
		}
	}
	else UE_LOG(LogTemp, Error, TEXT("Could not find ids.txt file at %s"), *filePath);

	return params;
}