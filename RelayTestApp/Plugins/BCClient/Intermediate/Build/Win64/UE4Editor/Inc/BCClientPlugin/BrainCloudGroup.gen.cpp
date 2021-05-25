// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudGroup() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_ERole();
// End Cross Module References
	static UEnum* EAutoJoinStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("EAutoJoinStrategy"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EAutoJoinStrategy>()
	{
		return EAutoJoinStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoJoinStrategy(EAutoJoinStrategy_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("EAutoJoinStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy_Hash() { return 2967774411U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoJoinStrategy"), 0, Get_Z_Construct_UEnum_BCClientPlugin_EAutoJoinStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoJoinStrategy::JoinFirstGroup", (int64)EAutoJoinStrategy::JoinFirstGroup },
				{ "EAutoJoinStrategy::JoinRandomGroup", (int64)EAutoJoinStrategy::JoinRandomGroup },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JoinFirstGroup.DisplayName", "JoinFirstGroup" },
				{ "JoinFirstGroup.Name", "EAutoJoinStrategy::JoinFirstGroup" },
				{ "JoinRandomGroup.DisplayName", "JoinRandomGroup" },
				{ "JoinRandomGroup.Name", "EAutoJoinStrategy::JoinRandomGroup" },
				{ "ModuleRelativePath", "Public/BrainCloudGroup.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"EAutoJoinStrategy",
				"EAutoJoinStrategy",
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
	static UEnum* ERole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_ERole, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("ERole"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<ERole>()
	{
		return ERole_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERole(ERole_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("ERole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_ERole_Hash() { return 1053620774U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_ERole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERole"), 0, Get_Z_Construct_UEnum_BCClientPlugin_ERole_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERole::OWNER", (int64)ERole::OWNER },
				{ "ERole::ADMIN", (int64)ERole::ADMIN },
				{ "ERole::MEMBER", (int64)ERole::MEMBER },
				{ "ERole::OTHER", (int64)ERole::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADMIN.DisplayName", "Admin" },
				{ "ADMIN.Name", "ERole::ADMIN" },
				{ "BlueprintType", "true" },
				{ "MEMBER.DisplayName", "Member" },
				{ "MEMBER.Name", "ERole::MEMBER" },
				{ "ModuleRelativePath", "Public/BrainCloudGroup.h" },
				{ "OTHER.DisplayName", "Other" },
				{ "OTHER.Name", "ERole::OTHER" },
				{ "OWNER.DisplayName", "Owner" },
				{ "OWNER.Name", "ERole::OWNER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"ERole",
				"ERole",
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
