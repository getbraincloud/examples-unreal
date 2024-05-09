// Fill out your copyright notice in the Description page of Project Settings.


#include "BCChatUtilities.h"
#include "Kismet/GameplayStatics.h"

FDateTime UBCChatUtilities::UTCToDateTime(int64 utcMSeconds)
{
	return FDateTime::FromUnixTimestamp(utcMSeconds / 1000);
}

void UBCChatUtilities::SelectFile(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames)
{
#if PLATFORM_WINDOWS
	if (GEngine)
	{
		if (GEngine->GameViewport)
		{
			void* ParentWindowHandle = GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
			IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
			if (DesktopPlatform)
			{
				//Opening the file picker!
				uint32 SelectionFlag = 0; //A value of 0 represents single file selection while a value of 1 represents multiple file selection
				DesktopPlatform->OpenFileDialog(ParentWindowHandle, DialogTitle, DefaultPath, FString(""), FileTypes, SelectionFlag, OutFileNames);
			}
		}
	}
#endif
}
