// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCBlueprintSupport/Classes/K2Node_BrainCloudCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_BrainCloudCall() {}
// Cross Module References
	BCBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_BrainCloudCall_NoRegister();
	BCBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_BrainCloudCall();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	UPackage* Z_Construct_UPackage__Script_BCBlueprintSupport();
// End Cross Module References
	void UK2Node_BrainCloudCall::StaticRegisterNativesUK2Node_BrainCloudCall()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_BrainCloudCall_NoRegister()
	{
		return UK2Node_BrainCloudCall::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BrainCloudCall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BCBlueprintSupport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This node is a latent brainCloud client call (handles scanning all UBCBlueprintCallProxyBase classes for static factory calls)\n" },
		{ "IncludePath", "K2Node_BrainCloudCall.h" },
		{ "ModuleRelativePath", "Classes/K2Node_BrainCloudCall.h" },
		{ "ToolTip", "This node is a latent brainCloud client call (handles scanning all UBCBlueprintCallProxyBase classes for static factory calls)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BrainCloudCall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::ClassParams = {
		&UK2Node_BrainCloudCall::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BrainCloudCall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_BrainCloudCall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_BrainCloudCall, 2442050166);
	template<> BCBLUEPRINTSUPPORT_API UClass* StaticClass<UK2Node_BrainCloudCall>()
	{
		return UK2Node_BrainCloudCall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_BrainCloudCall(Z_Construct_UClass_UK2Node_BrainCloudCall, &UK2Node_BrainCloudCall::StaticClass, TEXT("/Script/BCBlueprintSupport"), TEXT("UK2Node_BrainCloudCall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BrainCloudCall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
