// Fill out your copyright notice in the Description page of Project Settings.


#include "BCChatUtilities.h"
#include "BCGameInstance.h"
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

FString UBCChatUtilities::GetUserLanguageWindows()
{
	return FInternationalization::Get().GetCurrentLocale()->GetTwoLetterISOLanguageName();
}

FString UBCChatUtilities::GetUserCountryWindows()
{
	FString Country;
#if PLATFORM_WINDOWS
	int geoId = GetUserGeoID(16);
	int lcid = GetUserDefaultLCID();
	wchar_t locationBuffer[3];
	GetGeoInfo(geoId, 4, locationBuffer, 3, lcid);

	Country = locationBuffer;

#else
	UE_LOG(LogTemp, Warning, TEXT("App is not running on a supported platform, cannot get user country from Windows platform, reverting to default country from Locale (Language selection)"));
	
#endif

	return Country;
}

FString UBCChatUtilities::GetBCCountryCode()
{
	UWorld* World = GEngine->GetWorldContexts()[0].World();
	UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(World);

	if (GameInstance)
	{
		UBCGameInstance* CustomGameInstance = Cast<UBCGameInstance>(GameInstance);
		if (CustomGameInstance)
		{
			// Access the property within your custom game instance class
			 return CustomGameInstance->BrainCloudWrapper->getClient()->getCountryCode();; // Replace "YourProperty" with the name of your property
		}
		else
		{
			return "Failed to get UBCGameInstance";
		}
	}
	else
	{
		return "Failed to get GameInstance";
	}
}
