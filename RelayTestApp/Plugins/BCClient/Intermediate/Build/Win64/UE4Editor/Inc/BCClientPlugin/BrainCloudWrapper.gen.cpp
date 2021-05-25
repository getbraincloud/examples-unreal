// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudWrapper() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
// End Cross Module References
	void UBrainCloudWrapper::StaticRegisterNativesUBrainCloudWrapper()
	{
	}
	UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister()
	{
		return UBrainCloudWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UBrainCloudWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainCloudWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The UBrainCloudWrapper provides some convenience functionality to developers when they are\n * getting started with the authentication system.\n *\n * By using the wrapper authentication methods, the anonymous and profile ids will be automatically\n * persisted upon successful authentication. When authenticating, any stored anonymous/profile ids will\n * be sent to the server. This strategy is useful when using anonymous authentication.\n */" },
		{ "IncludePath", "BrainCloudWrapper.h" },
		{ "ModuleRelativePath", "Public/BrainCloudWrapper.h" },
		{ "ToolTip", "The UBrainCloudWrapper provides some convenience functionality to developers when they are\ngetting started with the authentication system.\n\nBy using the wrapper authentication methods, the anonymous and profile ids will be automatically\npersisted upon successful authentication. When authenticating, any stored anonymous/profile ids will\nbe sent to the server. This strategy is useful when using anonymous authentication." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainCloudWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainCloudWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrainCloudWrapper_Statics::ClassParams = {
		&UBrainCloudWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainCloudWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainCloudWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrainCloudWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrainCloudWrapper, 1160662541);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBrainCloudWrapper>()
	{
		return UBrainCloudWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrainCloudWrapper(Z_Construct_UClass_UBrainCloudWrapper, &UBrainCloudWrapper::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBrainCloudWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainCloudWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
