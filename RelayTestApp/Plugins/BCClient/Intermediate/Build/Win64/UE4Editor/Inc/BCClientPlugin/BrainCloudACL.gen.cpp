// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudACL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudACL() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudACL_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudACL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EAcl();
// End Cross Module References
	DEFINE_FUNCTION(UBrainCloudACL::execCreateNewACL)
	{
		P_GET_ENUM(EAcl,Z_Param_access);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBrainCloudACL**)Z_Param__Result=UBrainCloudACL::CreateNewACL(EAcl(Z_Param_access));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainCloudACL::exectoJsonString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->toJsonString();
		P_NATIVE_END;
	}
	void UBrainCloudACL::StaticRegisterNativesUBrainCloudACL()
	{
		UClass* Class = UBrainCloudACL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewACL", &UBrainCloudACL::execCreateNewACL },
			{ "toJsonString", &UBrainCloudACL::exectoJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics
	{
		struct BrainCloudACL_eventCreateNewACL_Parms
		{
			EAcl access;
			UBrainCloudACL* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_access_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_access;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::NewProp_access_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::NewProp_access = { "access", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudACL_eventCreateNewACL_Parms, access), Z_Construct_UEnum_BCClientPlugin_EAcl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudACL_eventCreateNewACL_Parms, ReturnValue), Z_Construct_UClass_UBrainCloudACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::NewProp_access_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::NewProp_access,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|ACL" },
		{ "ModuleRelativePath", "Public/BrainCloudACL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainCloudACL, nullptr, "CreateNewACL", nullptr, nullptr, sizeof(BrainCloudACL_eventCreateNewACL_Parms), Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainCloudACL_CreateNewACL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainCloudACL_CreateNewACL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics
	{
		struct BrainCloudACL_eventtoJsonString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudACL_eventtoJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BrainCloudACL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainCloudACL, nullptr, "toJsonString", nullptr, nullptr, sizeof(BrainCloudACL_eventtoJsonString_Parms), Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainCloudACL_toJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainCloudACL_toJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBrainCloudACL_NoRegister()
	{
		return UBrainCloudACL::StaticClass();
	}
	struct Z_Construct_UClass_UBrainCloudACL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Other_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainCloudACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrainCloudACL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrainCloudACL_CreateNewACL, "CreateNewACL" }, // 258703217
		{ &Z_Construct_UFunction_UBrainCloudACL_toJsonString, "toJsonString" }, // 1005885609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudACL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BrainCloudACL.h" },
		{ "ModuleRelativePath", "Public/BrainCloudACL.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other_MetaData[] = {
		{ "Category", "BrainCloudACL" },
		{ "ModuleRelativePath", "Public/BrainCloudACL.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudACL, Other), Z_Construct_UEnum_BCClientPlugin_EAcl, METADATA_PARAMS(Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainCloudACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudACL_Statics::NewProp_Other,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainCloudACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainCloudACL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrainCloudACL_Statics::ClassParams = {
		&UBrainCloudACL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBrainCloudACL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudACL_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainCloudACL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudACL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainCloudACL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrainCloudACL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrainCloudACL, 801999560);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBrainCloudACL>()
	{
		return UBrainCloudACL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrainCloudACL(Z_Construct_UClass_UBrainCloudACL, &UBrainCloudACL::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBrainCloudACL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainCloudACL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
