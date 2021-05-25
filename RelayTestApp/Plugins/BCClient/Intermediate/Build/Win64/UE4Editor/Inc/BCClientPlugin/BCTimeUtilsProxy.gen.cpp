// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCTimeUtilsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCTimeUtilsProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCTimeUtilsProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCTimeUtilsProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UBCTimeUtilsProxy::execUTCTimeToLocalTimeBP)
	{
		P_GET_STRUCT(FDateTime,Z_Param_utcDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UBCTimeUtilsProxy::UTCTimeToLocalTimeBP(Z_Param_utcDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTimeUtilsProxy::execLocalTimeToUTCTimeBP)
	{
		P_GET_STRUCT(FDateTime,Z_Param_localDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UBCTimeUtilsProxy::LocalTimeToUTCTimeBP(Z_Param_localDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTimeUtilsProxy::execUTCMillisToUTCDateTime)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_utcDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UBCTimeUtilsProxy::UTCMillisToUTCDateTime(Z_Param_utcDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCTimeUtilsProxy::execUTCDateTimeToUTCMillisBP)
	{
		P_GET_STRUCT(FDateTime,Z_Param_utcDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UBCTimeUtilsProxy::UTCDateTimeToUTCMillisBP(Z_Param_utcDate);
		P_NATIVE_END;
	}
	void UBCTimeUtilsProxy::StaticRegisterNativesUBCTimeUtilsProxy()
	{
		UClass* Class = UBCTimeUtilsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LocalTimeToUTCTimeBP", &UBCTimeUtilsProxy::execLocalTimeToUTCTimeBP },
			{ "UTCDateTimeToUTCMillisBP", &UBCTimeUtilsProxy::execUTCDateTimeToUTCMillisBP },
			{ "UTCMillisToUTCDateTime", &UBCTimeUtilsProxy::execUTCMillisToUTCDateTime },
			{ "UTCTimeToLocalTimeBP", &UBCTimeUtilsProxy::execUTCTimeToLocalTimeBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics
	{
		struct BCTimeUtilsProxy_eventLocalTimeToUTCTimeBP_Parms
		{
			FDateTime localDate;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_localDate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::NewProp_localDate = { "localDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventLocalTimeToUTCTimeBP_Parms, localDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventLocalTimeToUTCTimeBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::NewProp_localDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|TimeUtils" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeUtilsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTimeUtilsProxy, nullptr, "LocalTimeToUTCTimeBP", nullptr, nullptr, sizeof(BCTimeUtilsProxy_eventLocalTimeToUTCTimeBP_Parms), Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics
	{
		struct BCTimeUtilsProxy_eventUTCDateTimeToUTCMillisBP_Parms
		{
			FDateTime utcDate;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_utcDate;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::NewProp_utcDate = { "utcDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventUTCDateTimeToUTCMillisBP_Parms, utcDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventUTCDateTimeToUTCMillisBP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::NewProp_utcDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|TimeUtils" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeUtilsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTimeUtilsProxy, nullptr, "UTCDateTimeToUTCMillisBP", nullptr, nullptr, sizeof(BCTimeUtilsProxy_eventUTCDateTimeToUTCMillisBP_Parms), Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics
	{
		struct BCTimeUtilsProxy_eventUTCMillisToUTCDateTime_Parms
		{
			int64 utcDateTime;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_utcDateTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::NewProp_utcDateTime = { "utcDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventUTCMillisToUTCDateTime_Parms, utcDateTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventUTCMillisToUTCDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::NewProp_utcDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|TimeUtils" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeUtilsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTimeUtilsProxy, nullptr, "UTCMillisToUTCDateTime", nullptr, nullptr, sizeof(BCTimeUtilsProxy_eventUTCMillisToUTCDateTime_Parms), Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics
	{
		struct BCTimeUtilsProxy_eventUTCTimeToLocalTimeBP_Parms
		{
			FDateTime utcDate;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_utcDate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::NewProp_utcDate = { "utcDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventUTCTimeToLocalTimeBP_Parms, utcDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCTimeUtilsProxy_eventUTCTimeToLocalTimeBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::NewProp_utcDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|TimeUtils" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeUtilsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCTimeUtilsProxy, nullptr, "UTCTimeToLocalTimeBP", nullptr, nullptr, sizeof(BCTimeUtilsProxy_eventUTCTimeToLocalTimeBP_Parms), Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCTimeUtilsProxy_NoRegister()
	{
		return UBCTimeUtilsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCTimeUtilsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCTimeUtilsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCTimeUtilsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCTimeUtilsProxy_LocalTimeToUTCTimeBP, "LocalTimeToUTCTimeBP" }, // 4241451712
		{ &Z_Construct_UFunction_UBCTimeUtilsProxy_UTCDateTimeToUTCMillisBP, "UTCDateTimeToUTCMillisBP" }, // 602837471
		{ &Z_Construct_UFunction_UBCTimeUtilsProxy_UTCMillisToUTCDateTime, "UTCMillisToUTCDateTime" }, // 1655836156
		{ &Z_Construct_UFunction_UBCTimeUtilsProxy_UTCTimeToLocalTimeBP, "UTCTimeToLocalTimeBP" }, // 1693733179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCTimeUtilsProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintProxies/BCTimeUtilsProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCTimeUtilsProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCTimeUtilsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCTimeUtilsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCTimeUtilsProxy_Statics::ClassParams = {
		&UBCTimeUtilsProxy::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBCTimeUtilsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCTimeUtilsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCTimeUtilsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCTimeUtilsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCTimeUtilsProxy, 1133538350);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCTimeUtilsProxy>()
	{
		return UBCTimeUtilsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCTimeUtilsProxy(Z_Construct_UClass_UBCTimeUtilsProxy, &UBCTimeUtilsProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCTimeUtilsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCTimeUtilsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
