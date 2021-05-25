// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BrainCloudSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudSave() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudSave_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	void UBrainCloudSave::StaticRegisterNativesUBrainCloudSave()
	{
	}
	UClass* Z_Construct_UClass_UBrainCloudSave_NoRegister()
	{
		return UBrainCloudSave::StaticClass();
	}
	struct Z_Construct_UClass_UBrainCloudSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnonymousId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnonymousId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthenticationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainCloudSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudSave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BrainCloudSave.h" },
		{ "ModuleRelativePath", "Private/BrainCloudSave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_ProfileId_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Private/BrainCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_ProfileId = { "ProfileId", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudSave, ProfileId), METADATA_PARAMS(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_ProfileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_ProfileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AnonymousId_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Private/BrainCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AnonymousId = { "AnonymousId", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudSave, AnonymousId), METADATA_PARAMS(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AnonymousId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AnonymousId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AuthenticationType_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Private/BrainCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AuthenticationType = { "AuthenticationType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudSave, AuthenticationType), METADATA_PARAMS(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AuthenticationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AuthenticationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Private/BrainCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudSave, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Private/BrainCloudSave.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudSave, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_UserIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainCloudSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_ProfileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AnonymousId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_AuthenticationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudSave_Statics::NewProp_UserIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainCloudSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainCloudSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrainCloudSave_Statics::ClassParams = {
		&UBrainCloudSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrainCloudSave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainCloudSave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainCloudSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrainCloudSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrainCloudSave, 1191371841);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBrainCloudSave>()
	{
		return UBrainCloudSave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrainCloudSave(Z_Construct_UClass_UBrainCloudSave, &UBrainCloudSave::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBrainCloudSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainCloudSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
