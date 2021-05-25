// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudGroupACL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudGroupACL() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudGroupACL_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudGroupACL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_EAcl();
// End Cross Module References
	DEFINE_FUNCTION(UBrainCloudGroupACL::execCreateNewGroupACL)
	{
		P_GET_ENUM(EAcl,Z_Param_other);
		P_GET_ENUM(EAcl,Z_Param_member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBrainCloudGroupACL**)Z_Param__Result=UBrainCloudGroupACL::CreateNewGroupACL(EAcl(Z_Param_other),EAcl(Z_Param_member));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainCloudGroupACL::exectoJsonString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->toJsonString();
		P_NATIVE_END;
	}
	void UBrainCloudGroupACL::StaticRegisterNativesUBrainCloudGroupACL()
	{
		UClass* Class = UBrainCloudGroupACL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewGroupACL", &UBrainCloudGroupACL::execCreateNewGroupACL },
			{ "toJsonString", &UBrainCloudGroupACL::exectoJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics
	{
		struct BrainCloudGroupACL_eventCreateNewGroupACL_Parms
		{
			EAcl other;
			EAcl member;
			UBrainCloudGroupACL* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_other_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_member_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_member;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_other_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudGroupACL_eventCreateNewGroupACL_Parms, other), Z_Construct_UEnum_BCClientPlugin_EAcl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_member_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_member = { "member", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudGroupACL_eventCreateNewGroupACL_Parms, member), Z_Construct_UEnum_BCClientPlugin_EAcl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudGroupACL_eventCreateNewGroupACL_Parms, ReturnValue), Z_Construct_UClass_UBrainCloudGroupACL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_other_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_member_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_member,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::Function_MetaDataParams[] = {
		{ "Category", "BrainCloud|ACL" },
		{ "ModuleRelativePath", "Public/BrainCloudGroupACL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainCloudGroupACL, nullptr, "CreateNewGroupACL", nullptr, nullptr, sizeof(BrainCloudGroupACL_eventCreateNewGroupACL_Parms), Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics
	{
		struct BrainCloudGroupACL_eventtoJsonString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainCloudGroupACL_eventtoJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BrainCloudGroupACL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainCloudGroupACL, nullptr, "toJsonString", nullptr, nullptr, sizeof(BrainCloudGroupACL_eventtoJsonString_Parms), Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBrainCloudGroupACL_NoRegister()
	{
		return UBrainCloudGroupACL::StaticClass();
	}
	struct Z_Construct_UClass_UBrainCloudGroupACL_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Member_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Member;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainCloudGroupACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrainCloudGroupACL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrainCloudGroupACL_CreateNewGroupACL, "CreateNewGroupACL" }, // 3018844338
		{ &Z_Construct_UFunction_UBrainCloudGroupACL_toJsonString, "toJsonString" }, // 2623608603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudGroupACL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BrainCloudGroupACL.h" },
		{ "ModuleRelativePath", "Public/BrainCloudGroupACL.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other_MetaData[] = {
		{ "Category", "BrainCloudGroupACL" },
		{ "ModuleRelativePath", "Public/BrainCloudGroupACL.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudGroupACL, Other), Z_Construct_UEnum_BCClientPlugin_EAcl, METADATA_PARAMS(Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member_MetaData[] = {
		{ "Category", "BrainCloudGroupACL" },
		{ "ModuleRelativePath", "Public/BrainCloudGroupACL.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainCloudGroupACL, Member), Z_Construct_UEnum_BCClientPlugin_EAcl, METADATA_PARAMS(Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainCloudGroupACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainCloudGroupACL_Statics::NewProp_Member,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainCloudGroupACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainCloudGroupACL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrainCloudGroupACL_Statics::ClassParams = {
		&UBrainCloudGroupACL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBrainCloudGroupACL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudGroupACL_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainCloudGroupACL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainCloudGroupACL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainCloudGroupACL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrainCloudGroupACL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrainCloudGroupACL, 681261314);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBrainCloudGroupACL>()
	{
		return UBrainCloudGroupACL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrainCloudGroupACL(Z_Construct_UClass_UBrainCloudGroupACL, &UBrainCloudGroupACL::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBrainCloudGroupACL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainCloudGroupACL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
