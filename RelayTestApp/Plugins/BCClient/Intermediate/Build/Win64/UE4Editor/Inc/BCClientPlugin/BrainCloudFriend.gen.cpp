// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudFriend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudFriend() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EFriendPlatform();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	static UEnum* EFriendPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_EFriendPlatform, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("EFriendPlatform"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<EFriendPlatform>()
	{
		return EFriendPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendPlatform(EFriendPlatform_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("EFriendPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_EFriendPlatform_Hash() { return 1732878107U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_EFriendPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendPlatform"), 0, Get_Z_Construct_UEnum_BCClientPlugin_EFriendPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendPlatform::ALL", (int64)EFriendPlatform::ALL },
				{ "EFriendPlatform::BRAINCLOUD", (int64)EFriendPlatform::BRAINCLOUD },
				{ "EFriendPlatform::FACEBOOK", (int64)EFriendPlatform::FACEBOOK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL.DisplayName", "All" },
				{ "ALL.Name", "EFriendPlatform::ALL" },
				{ "BlueprintType", "true" },
				{ "BRAINCLOUD.DisplayName", "brainCloud" },
				{ "BRAINCLOUD.Name", "EFriendPlatform::BRAINCLOUD" },
				{ "FACEBOOK.DisplayName", "Facebook" },
				{ "FACEBOOK.Name", "EFriendPlatform::FACEBOOK" },
				{ "ModuleRelativePath", "Public/BrainCloudFriend.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"EFriendPlatform",
				"EFriendPlatform",
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
