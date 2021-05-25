// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BCPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCPlatform() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EBCPlatform();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	static UEnum* EBCPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_EBCPlatform, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("EBCPlatform"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EBCPlatform>()
	{
		return EBCPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBCPlatform(EBCPlatform_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("EBCPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_EBCPlatform_Hash() { return 4208770338U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_EBCPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBCPlatform"), 0, Get_Z_Construct_UEnum_BCClientPlugin_EBCPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBCPlatform::GOOGLE_PLAY_ANDROID", (int64)EBCPlatform::GOOGLE_PLAY_ANDROID },
				{ "EBCPlatform::AMAZON_ANDROID", (int64)EBCPlatform::AMAZON_ANDROID },
				{ "EBCPlatform::BLACKBERRY", (int64)EBCPlatform::BLACKBERRY },
				{ "EBCPlatform::FACEBOOK", (int64)EBCPlatform::FACEBOOK },
				{ "EBCPlatform::OCULUS", (int64)EBCPlatform::OCULUS },
				{ "EBCPlatform::PLAYSTATIONNETWORK", (int64)EBCPlatform::PLAYSTATIONNETWORK },
				{ "EBCPlatform::IOS", (int64)EBCPlatform::IOS },
				{ "EBCPlatform::LINUX_PLATFORM", (int64)EBCPlatform::LINUX_PLATFORM },
				{ "EBCPlatform::MAC", (int64)EBCPlatform::MAC },
				{ "EBCPlatform::WEB", (int64)EBCPlatform::WEB },
				{ "EBCPlatform::WINDOWS", (int64)EBCPlatform::WINDOWS },
				{ "EBCPlatform::WINDOWS_PHONE", (int64)EBCPlatform::WINDOWS_PHONE },
				{ "EBCPlatform::XBOX_360", (int64)EBCPlatform::XBOX_360 },
				{ "EBCPlatform::PS3", (int64)EBCPlatform::PS3 },
				{ "EBCPlatform::XBOX_ONE", (int64)EBCPlatform::XBOX_ONE },
				{ "EBCPlatform::PS4", (int64)EBCPlatform::PS4 },
				{ "EBCPlatform::WATCH_OS", (int64)EBCPlatform::WATCH_OS },
				{ "EBCPlatform::WII", (int64)EBCPlatform::WII },
				{ "EBCPlatform::PS_VITA", (int64)EBCPlatform::PS_VITA },
				{ "EBCPlatform::TIZEN", (int64)EBCPlatform::TIZEN },
				{ "EBCPlatform::ROKU", (int64)EBCPlatform::ROKU },
				{ "EBCPlatform::UNKNOWN", (int64)EBCPlatform::UNKNOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AMAZON_ANDROID.DisplayName", "Amazon Android" },
				{ "AMAZON_ANDROID.Name", "EBCPlatform::AMAZON_ANDROID" },
				{ "BLACKBERRY.DisplayName", "BlackBerry" },
				{ "BLACKBERRY.Name", "EBCPlatform::BLACKBERRY" },
				{ "BlueprintType", "true" },
				{ "FACEBOOK.DisplayName", "Facebook" },
				{ "FACEBOOK.Name", "EBCPlatform::FACEBOOK" },
				{ "GOOGLE_PLAY_ANDROID.DisplayName", "Google Play Android" },
				{ "GOOGLE_PLAY_ANDROID.Name", "EBCPlatform::GOOGLE_PLAY_ANDROID" },
				{ "IOS.DisplayName", "iOS" },
				{ "IOS.Name", "EBCPlatform::IOS" },
				{ "LINUX_PLATFORM.DisplayName", "Linux" },
				{ "LINUX_PLATFORM.Name", "EBCPlatform::LINUX_PLATFORM" },
				{ "MAC.DisplayName", "Mac" },
				{ "MAC.Name", "EBCPlatform::MAC" },
				{ "ModuleRelativePath", "Public/BCPlatform.h" },
				{ "OCULUS.DisplayName", "Oculus" },
				{ "OCULUS.Name", "EBCPlatform::OCULUS" },
				{ "PLAYSTATIONNETWORK.DisplayName", "PlaystationNetwork" },
				{ "PLAYSTATIONNETWORK.Name", "EBCPlatform::PLAYSTATIONNETWORK" },
				{ "PS3.DisplayName", "PS3" },
				{ "PS3.Name", "EBCPlatform::PS3" },
				{ "PS4.DisplayName", "PS4" },
				{ "PS4.Name", "EBCPlatform::PS4" },
				{ "PS_VITA.DisplayName", "PS Vita" },
				{ "PS_VITA.Name", "EBCPlatform::PS_VITA" },
				{ "ROKU.DisplayName", "Roku" },
				{ "ROKU.Name", "EBCPlatform::ROKU" },
				{ "TIZEN.DisplayName", "Tizen" },
				{ "TIZEN.Name", "EBCPlatform::TIZEN" },
				{ "UNKNOWN.DisplayName", "Unknown" },
				{ "UNKNOWN.Name", "EBCPlatform::UNKNOWN" },
				{ "WATCH_OS.DisplayName", "WatchOS" },
				{ "WATCH_OS.Name", "EBCPlatform::WATCH_OS" },
				{ "WEB.DisplayName", "Web" },
				{ "WEB.Name", "EBCPlatform::WEB" },
				{ "WII.DisplayName", "Wii" },
				{ "WII.Name", "EBCPlatform::WII" },
				{ "WINDOWS.DisplayName", "Windows" },
				{ "WINDOWS.Name", "EBCPlatform::WINDOWS" },
				{ "WINDOWS_PHONE.DisplayName", "Windows Phone" },
				{ "WINDOWS_PHONE.Name", "EBCPlatform::WINDOWS_PHONE" },
				{ "XBOX_360.DisplayName", "Xbox 360" },
				{ "XBOX_360.Name", "EBCPlatform::XBOX_360" },
				{ "XBOX_ONE.DisplayName", "Xbox One" },
				{ "XBOX_ONE.Name", "EBCPlatform::XBOX_ONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"EBCPlatform",
				"EBCPlatform",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
