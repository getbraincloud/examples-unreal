// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/IAcl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAcl() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EAcl();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	static UEnum* EAcl_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_EAcl, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("EAcl"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EAcl>()
	{
		return EAcl_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAcl(EAcl_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("EAcl"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_EAcl_Hash() { return 1672198366U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_EAcl()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAcl"), 0, Get_Z_Construct_UEnum_BCClientPlugin_EAcl_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAcl::NONE", (int64)EAcl::NONE },
				{ "EAcl::READ_ONLY", (int64)EAcl::READ_ONLY },
				{ "EAcl::READ_WRITE", (int64)EAcl::READ_WRITE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/IAcl.h" },
				{ "NONE.DisplayName", "None" },
				{ "NONE.Name", "EAcl::NONE" },
				{ "READ_ONLY.DisplayName", "Read Only" },
				{ "READ_ONLY.Name", "EAcl::READ_ONLY" },
				{ "READ_WRITE.DisplayName", "Read-Write" },
				{ "READ_WRITE.Name", "EAcl::READ_WRITE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"EAcl",
				"EAcl",
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
