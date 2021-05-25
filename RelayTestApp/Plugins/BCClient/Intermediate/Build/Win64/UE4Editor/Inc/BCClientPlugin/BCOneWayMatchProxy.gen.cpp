// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCOneWayMatchProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCOneWayMatchProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCOneWayMatchProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCOneWayMatchProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCOneWayMatchProxy::execCompleteMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playbackStreamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCOneWayMatchProxy**)Z_Param__Result=UBCOneWayMatchProxy::CompleteMatch(Z_Param_brainCloudWrapper,Z_Param_playbackStreamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCOneWayMatchProxy::execCancelMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_playbackStreamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCOneWayMatchProxy**)Z_Param__Result=UBCOneWayMatchProxy::CancelMatch(Z_Param_brainCloudWrapper,Z_Param_playbackStreamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCOneWayMatchProxy::execStartMatch)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_otherPlayerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCOneWayMatchProxy**)Z_Param__Result=UBCOneWayMatchProxy::StartMatch(Z_Param_brainCloudWrapper,Z_Param_otherPlayerId,Z_Param_rangeDelta);
		P_NATIVE_END;
	}
	void UBCOneWayMatchProxy::StaticRegisterNativesUBCOneWayMatchProxy()
	{
		UClass* Class = UBCOneWayMatchProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelMatch", &UBCOneWayMatchProxy::execCancelMatch },
			{ "CompleteMatch", &UBCOneWayMatchProxy::execCompleteMatch },
			{ "StartMatch", &UBCOneWayMatchProxy::execStartMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics
	{
		struct BCOneWayMatchProxy_eventCancelMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playbackStreamId;
			UBCOneWayMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playbackStreamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playbackStreamId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventCancelMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_playbackStreamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_playbackStreamId = { "playbackStreamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventCancelMatch_Parms, playbackStreamId), METADATA_PARAMS(Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_playbackStreamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_playbackStreamId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventCancelMatch_Parms, ReturnValue), Z_Construct_UClass_UBCOneWayMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_playbackStreamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|One Way Match" },
		{ "Comment", "/**\n    * Cancels a match\n    *\n    * Service Name - OneWayMatch\n    * Service Operation - CancelMatch\n    *\n    * Param - playbackStreamId The playback stream id returned in the start match\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCOneWayMatchProxy.h" },
		{ "ToolTip", "Cancels a match\n\nService Name - OneWayMatch\nService Operation - CancelMatch\n\nParam - playbackStreamId The playback stream id returned in the start match" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCOneWayMatchProxy, nullptr, "CancelMatch", nullptr, nullptr, sizeof(BCOneWayMatchProxy_eventCancelMatch_Parms), Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics
	{
		struct BCOneWayMatchProxy_eventCompleteMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString playbackStreamId;
			UBCOneWayMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playbackStreamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playbackStreamId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventCompleteMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_playbackStreamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_playbackStreamId = { "playbackStreamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventCompleteMatch_Parms, playbackStreamId), METADATA_PARAMS(Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_playbackStreamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_playbackStreamId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventCompleteMatch_Parms, ReturnValue), Z_Construct_UClass_UBCOneWayMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_playbackStreamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|One Way Match" },
		{ "Comment", "/**\n    * Completes a match\n    *\n    * Service Name - OneWayMatch\n    * Service Operation - CompleteMatch\n    *\n    * Param - playbackStreamId The playback stream id returned in the initial start match\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCOneWayMatchProxy.h" },
		{ "ToolTip", "Completes a match\n\nService Name - OneWayMatch\nService Operation - CompleteMatch\n\nParam - playbackStreamId The playback stream id returned in the initial start match" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCOneWayMatchProxy, nullptr, "CompleteMatch", nullptr, nullptr, sizeof(BCOneWayMatchProxy_eventCompleteMatch_Parms), Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics
	{
		struct BCOneWayMatchProxy_eventStartMatch_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString otherPlayerId;
			int32 rangeDelta;
			UBCOneWayMatchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_otherPlayerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeDelta;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventStartMatch_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_otherPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_otherPlayerId = { "otherPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventStartMatch_Parms, otherPlayerId), METADATA_PARAMS(Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_otherPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_otherPlayerId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_rangeDelta = { "rangeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventStartMatch_Parms, rangeDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCOneWayMatchProxy_eventStartMatch_Parms, ReturnValue), Z_Construct_UClass_UBCOneWayMatchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_otherPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_rangeDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|One Way Match" },
		{ "Comment", "/**\n    * Starts a match\n    *\n    * Service Name - OneWayMatch\n    * Service Operation - StartMatch\n    *\n    * Param - otherPlayerId The player to start a match with\n    * Param - rangeDelta The range delta used for the initial match search\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCOneWayMatchProxy.h" },
		{ "ToolTip", "Starts a match\n\nService Name - OneWayMatch\nService Operation - StartMatch\n\nParam - otherPlayerId The player to start a match with\nParam - rangeDelta The range delta used for the initial match search" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCOneWayMatchProxy, nullptr, "StartMatch", nullptr, nullptr, sizeof(BCOneWayMatchProxy_eventStartMatch_Parms), Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCOneWayMatchProxy_NoRegister()
	{
		return UBCOneWayMatchProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCOneWayMatchProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCOneWayMatchProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCOneWayMatchProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCOneWayMatchProxy_CancelMatch, "CancelMatch" }, // 1621952145
		{ &Z_Construct_UFunction_UBCOneWayMatchProxy_CompleteMatch, "CompleteMatch" }, // 992971760
		{ &Z_Construct_UFunction_UBCOneWayMatchProxy_StartMatch, "StartMatch" }, // 4007473020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCOneWayMatchProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCOneWayMatchProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCOneWayMatchProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCOneWayMatchProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCOneWayMatchProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCOneWayMatchProxy_Statics::ClassParams = {
		&UBCOneWayMatchProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCOneWayMatchProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCOneWayMatchProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCOneWayMatchProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCOneWayMatchProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCOneWayMatchProxy, 386327315);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCOneWayMatchProxy>()
	{
		return UBCOneWayMatchProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCOneWayMatchProxy(Z_Construct_UClass_UBCOneWayMatchProxy, &UBCOneWayMatchProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCOneWayMatchProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCOneWayMatchProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
