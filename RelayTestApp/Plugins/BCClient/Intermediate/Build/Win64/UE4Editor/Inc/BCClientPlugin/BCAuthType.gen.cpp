// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BCAuthType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCAuthType() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EBCAuthType();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	static UEnum* EBCAuthType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_EBCAuthType, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("EBCAuthType"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EBCAuthType>()
	{
		return EBCAuthType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBCAuthType(EBCAuthType_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("EBCAuthType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_EBCAuthType_Hash() { return 3132021324U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_EBCAuthType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBCAuthType"), 0, Get_Z_Construct_UEnum_BCClientPlugin_EBCAuthType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBCAuthType::Anonymous", (int64)EBCAuthType::Anonymous },
				{ "EBCAuthType::Universal", (int64)EBCAuthType::Universal },
				{ "EBCAuthType::Email", (int64)EBCAuthType::Email },
				{ "EBCAuthType::Facebook", (int64)EBCAuthType::Facebook },
				{ "EBCAuthType::FacebookLimited", (int64)EBCAuthType::FacebookLimited },
				{ "EBCAuthType::Oculus", (int64)EBCAuthType::Oculus },
				{ "EBCAuthType::PlaystationNetwork", (int64)EBCAuthType::PlaystationNetwork },
				{ "EBCAuthType::GameCenter", (int64)EBCAuthType::GameCenter },
				{ "EBCAuthType::Steam", (int64)EBCAuthType::Steam },
				{ "EBCAuthType::Google", (int64)EBCAuthType::Google },
				{ "EBCAuthType::GoogleOpenId", (int64)EBCAuthType::GoogleOpenId },
				{ "EBCAuthType::Apple", (int64)EBCAuthType::Apple },
				{ "EBCAuthType::Twitter", (int64)EBCAuthType::Twitter },
				{ "EBCAuthType::Parse", (int64)EBCAuthType::Parse },
				{ "EBCAuthType::Handoff", (int64)EBCAuthType::Handoff },
				{ "EBCAuthType::SettopHandoff", (int64)EBCAuthType::SettopHandoff },
				{ "EBCAuthType::External", (int64)EBCAuthType::External },
				{ "EBCAuthType::Unknown", (int64)EBCAuthType::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Anonymous.DisplayName", "Anonymous" },
				{ "Anonymous.Name", "EBCAuthType::Anonymous" },
				{ "Apple.DisplayName", "Apple" },
				{ "Apple.Name", "EBCAuthType::Apple" },
				{ "BlueprintType", "true" },
				{ "Email.DisplayName", "Email" },
				{ "Email.Name", "EBCAuthType::Email" },
				{ "External.DisplayName", "External" },
				{ "External.Name", "EBCAuthType::External" },
				{ "Facebook.DisplayName", "Facebook" },
				{ "Facebook.Name", "EBCAuthType::Facebook" },
				{ "FacebookLimited.DisplayName", "FacebookLimited" },
				{ "FacebookLimited.Name", "EBCAuthType::FacebookLimited" },
				{ "GameCenter.DisplayName", "GameCenter" },
				{ "GameCenter.Name", "EBCAuthType::GameCenter" },
				{ "Google.DisplayName", "Google" },
				{ "Google.Name", "EBCAuthType::Google" },
				{ "GoogleOpenId.DisplayName", "GoogleOpenId" },
				{ "GoogleOpenId.Name", "EBCAuthType::GoogleOpenId" },
				{ "Handoff.DisplayName", "Handoff" },
				{ "Handoff.Name", "EBCAuthType::Handoff" },
				{ "ModuleRelativePath", "Public/BCAuthType.h" },
				{ "Oculus.DisplayName", "Oculus" },
				{ "Oculus.Name", "EBCAuthType::Oculus" },
				{ "Parse.DisplayName", "Parse" },
				{ "Parse.Name", "EBCAuthType::Parse" },
				{ "PlaystationNetwork.DisplayName", "PlaystationNetwork" },
				{ "PlaystationNetwork.Name", "EBCAuthType::PlaystationNetwork" },
				{ "SettopHandoff.DisplayName", "SettopHandoff" },
				{ "SettopHandoff.Name", "EBCAuthType::SettopHandoff" },
				{ "Steam.DisplayName", "Steam" },
				{ "Steam.Name", "EBCAuthType::Steam" },
				{ "Twitter.DisplayName", "Twitter" },
				{ "Twitter.Name", "EBCAuthType::Twitter" },
				{ "Universal.DisplayName", "Universal" },
				{ "Universal.Name", "EBCAuthType::Universal" },
				{ "Unknown.DisplayName", "Unknown" },
				{ "Unknown.Name", "EBCAuthType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"EBCAuthType",
				"EBCAuthType",
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
