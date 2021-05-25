// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudLeaderboard() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ESortOrder();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ERotationType();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType();
// End Cross Module References
	static UEnum* ESortOrder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_ESortOrder, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("ESortOrder"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ESortOrder>()
	{
		return ESortOrder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESortOrder(ESortOrder_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("ESortOrder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_ESortOrder_Hash() { return 2620700071U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_ESortOrder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESortOrder"), 0, Get_Z_Construct_UEnum_BCClientPlugin_ESortOrder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESortOrder::HIGH_TO_LOW", (int64)ESortOrder::HIGH_TO_LOW },
				{ "ESortOrder::LOW_TO_HIGH", (int64)ESortOrder::LOW_TO_HIGH },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HIGH_TO_LOW.DisplayName", "High to Low" },
				{ "HIGH_TO_LOW.Name", "ESortOrder::HIGH_TO_LOW" },
				{ "LOW_TO_HIGH.DisplayName", "Low to High" },
				{ "LOW_TO_HIGH.Name", "ESortOrder::LOW_TO_HIGH" },
				{ "ModuleRelativePath", "Public/BrainCloudLeaderboard.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"ESortOrder",
				"ESortOrder",
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
	static UEnum* ERotationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_ERotationType, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("ERotationType"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ERotationType>()
	{
		return ERotationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERotationType(ERotationType_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("ERotationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_ERotationType_Hash() { return 4067640629U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_ERotationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERotationType"), 0, Get_Z_Construct_UEnum_BCClientPlugin_ERotationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERotationType::NEVER", (int64)ERotationType::NEVER },
				{ "ERotationType::DAILY", (int64)ERotationType::DAILY },
				{ "ERotationType::WEEKLY", (int64)ERotationType::WEEKLY },
				{ "ERotationType::MONTHLY", (int64)ERotationType::MONTHLY },
				{ "ERotationType::YEARLY", (int64)ERotationType::YEARLY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DAILY.DisplayName", "Daily" },
				{ "DAILY.Name", "ERotationType::DAILY" },
				{ "ModuleRelativePath", "Public/BrainCloudLeaderboard.h" },
				{ "MONTHLY.DisplayName", "Monthly" },
				{ "MONTHLY.Name", "ERotationType::MONTHLY" },
				{ "NEVER.DisplayName", "Never" },
				{ "NEVER.Name", "ERotationType::NEVER" },
				{ "WEEKLY.DisplayName", "Weekly" },
				{ "WEEKLY.Name", "ERotationType::WEEKLY" },
				{ "YEARLY.DisplayName", "Yearly" },
				{ "YEARLY.Name", "ERotationType::YEARLY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"ERotationType",
				"ERotationType",
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
	static UEnum* ESocialLeaderboardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("ESocialLeaderboardType"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ESocialLeaderboardType>()
	{
		return ESocialLeaderboardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESocialLeaderboardType(ESocialLeaderboardType_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("ESocialLeaderboardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType_Hash() { return 990738847U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESocialLeaderboardType"), 0, Get_Z_Construct_UEnum_BCClientPlugin_ESocialLeaderboardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESocialLeaderboardType::HIGH_VALUE", (int64)ESocialLeaderboardType::HIGH_VALUE },
				{ "ESocialLeaderboardType::CUMULATIVE", (int64)ESocialLeaderboardType::CUMULATIVE },
				{ "ESocialLeaderboardType::LAST_VALUE", (int64)ESocialLeaderboardType::LAST_VALUE },
				{ "ESocialLeaderboardType::LOW_VALUE", (int64)ESocialLeaderboardType::LOW_VALUE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CUMULATIVE.DisplayName", "Cumulative" },
				{ "CUMULATIVE.Name", "ESocialLeaderboardType::CUMULATIVE" },
				{ "HIGH_VALUE.DisplayName", "High Value" },
				{ "HIGH_VALUE.Name", "ESocialLeaderboardType::HIGH_VALUE" },
				{ "LAST_VALUE.DisplayName", "Last Value" },
				{ "LAST_VALUE.Name", "ESocialLeaderboardType::LAST_VALUE" },
				{ "LOW_VALUE.DisplayName", "Low Value" },
				{ "LOW_VALUE.Name", "ESocialLeaderboardType::LOW_VALUE" },
				{ "ModuleRelativePath", "Public/BrainCloudLeaderboard.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"ESocialLeaderboardType",
				"ESocialLeaderboardType",
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
