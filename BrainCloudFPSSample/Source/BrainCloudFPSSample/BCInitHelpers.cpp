// Copyright 2022 bitHeads, Inc. All Rights Reserved.

#include "BCInitHelpers.h"
#include "BrainCloudFPSSample.h"
#include "BrainCloudClient.h"
#include "BrainCloudWrapper.h"
#include "ids.h"

UBCInitHelpers::UBCInitHelpers(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FBrainCloudInitParams UBCInitHelpers::InitializeFromHeader()
{
	FBrainCloudInitParams params;

	params.ServerUrl = BRAINCLOUD_SERVER_URL;
	params.Secret = BRAINCLOUD_APP_SECRET;
	params.AppId = BRAINCLOUD_APP_ID;
	params.Version = BRAINCLOUD_APP_VERSION;

	return params;
}

FBrainCloudInitParams UBCInitHelpers::InitializeFromFile()
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