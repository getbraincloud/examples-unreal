// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Private/BlueprintProxies/BCMessagingProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCMessagingProxy() {}
// Cross Module References
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCMessagingProxy_NoRegister();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCMessagingProxy();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBCBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UClass* Z_Construct_UClass_UBrainCloudWrapper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBCMessagingProxy::execSendMessageSimple)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_toProfileIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_messageText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::SendMessageSimple(Z_Param_brainCloudWrapper,Z_Param_Out_in_toProfileIds,Z_Param_in_messageText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execSendMessage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_toProfileIds);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_contentJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::SendMessage(Z_Param_brainCloudWrapper,Z_Param_Out_in_toProfileIds,Z_Param_in_contentJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execMarkMessagesRead)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_msgBox);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_msgsIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::MarkMessagesRead(Z_Param_brainCloudWrapper,Z_Param_in_msgBox,Z_Param_Out_in_msgsIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execGetMessagesPageOffset)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_context);
		P_GET_PROPERTY(FIntProperty,Z_Param_in_pageOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::GetMessagesPageOffset(Z_Param_brainCloudWrapper,Z_Param_in_context,Z_Param_in_pageOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execGetMessagesPage)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::GetMessagesPage(Z_Param_brainCloudWrapper,Z_Param_in_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execGetMessages)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_msgBox);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_msgsIds);
		P_GET_UBOOL(Z_Param_markAsRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::GetMessages(Z_Param_brainCloudWrapper,Z_Param_in_msgBox,Z_Param_Out_in_msgsIds,Z_Param_markAsRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execGetMessageCounts)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::GetMessageCounts(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execGetMessageBoxes)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::GetMessageBoxes(Z_Param_brainCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBCMessagingProxy::execDeleteMessages)
	{
		P_GET_OBJECT(UBrainCloudWrapper,Z_Param_brainCloudWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_in_msgBox);
		P_GET_TARRAY_REF(FString,Z_Param_Out_in_msgsIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBCMessagingProxy**)Z_Param__Result=UBCMessagingProxy::DeleteMessages(Z_Param_brainCloudWrapper,Z_Param_in_msgBox,Z_Param_Out_in_msgsIds);
		P_NATIVE_END;
	}
	void UBCMessagingProxy::StaticRegisterNativesUBCMessagingProxy()
	{
		UClass* Class = UBCMessagingProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteMessages", &UBCMessagingProxy::execDeleteMessages },
			{ "GetMessageBoxes", &UBCMessagingProxy::execGetMessageBoxes },
			{ "GetMessageCounts", &UBCMessagingProxy::execGetMessageCounts },
			{ "GetMessages", &UBCMessagingProxy::execGetMessages },
			{ "GetMessagesPage", &UBCMessagingProxy::execGetMessagesPage },
			{ "GetMessagesPageOffset", &UBCMessagingProxy::execGetMessagesPageOffset },
			{ "MarkMessagesRead", &UBCMessagingProxy::execMarkMessagesRead },
			{ "SendMessage", &UBCMessagingProxy::execSendMessage },
			{ "SendMessageSimple", &UBCMessagingProxy::execSendMessageSimple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics
	{
		struct BCMessagingProxy_eventDeleteMessages_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_msgBox;
			TArray<FString> in_msgsIds;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_msgBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_msgBox;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_msgsIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_msgsIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_msgsIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventDeleteMessages_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgBox = { "in_msgBox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventDeleteMessages_Parms, in_msgBox), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgBox_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds_Inner = { "in_msgsIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds = { "in_msgsIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventDeleteMessages_Parms, in_msgsIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventDeleteMessages_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_in_msgsIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Deletes specified user messages on the server.\n    * \n    * Service Name - messaging\n\x09* Service Operation - DELETE_MESSAGES\n    *\n    * @param in_msgBox The msgBox that the msgIds belong to\n\x09* @param in_msgsIds Array of msg Ids to delete\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Deletes specified user messages on the server.\n\nService Name - messaging\nService Operation - DELETE_MESSAGES\n\n@param in_msgBox The msgBox that the msgIds belong to\n@param in_msgsIds Array of msg Ids to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "DeleteMessages", nullptr, nullptr, sizeof(BCMessagingProxy_eventDeleteMessages_Parms), Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics
	{
		struct BCMessagingProxy_eventGetMessageBoxes_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessageBoxes_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessageBoxes_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Retrieve user's message boxes, including 'inbox', 'sent', etc.\n    * \n    * Service Name - messaging\n\x09* Service Operation - GET_MESSAGE_BOXES\n    *\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Retrieve user's message boxes, including 'inbox', 'sent', etc.\n\nService Name - messaging\nService Operation - GET_MESSAGE_BOXES" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "GetMessageBoxes", nullptr, nullptr, sizeof(BCMessagingProxy_eventGetMessageBoxes_Parms), Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics
	{
		struct BCMessagingProxy_eventGetMessageCounts_Parms
		{
			UBrainCloudWrapper* brainCloud;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloud;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::NewProp_brainCloud = { "brainCloud", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessageCounts_Parms, brainCloud), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessageCounts_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::NewProp_brainCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Returns count of user's 'total' messages and their 'unread' messages.\n    * \n    * Service Name - messaging\n\x09* Service Operation - GET_MESSAGE_COUNTS\n    *\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Returns count of user's 'total' messages and their 'unread' messages.\n\nService Name - messaging\nService Operation - GET_MESSAGE_COUNTS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "GetMessageCounts", nullptr, nullptr, sizeof(BCMessagingProxy_eventGetMessageCounts_Parms), Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics
	{
		struct BCMessagingProxy_eventGetMessages_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_msgBox;
			TArray<FString> in_msgsIds;
			bool markAsRead;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_msgBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_msgBox;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_msgsIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_msgsIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_msgsIds;
		static void NewProp_markAsRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_markAsRead;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessages_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgBox = { "in_msgBox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessages_Parms, in_msgBox), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgBox_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds_Inner = { "in_msgsIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds = { "in_msgsIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessages_Parms, in_msgsIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds_MetaData)) };
	void Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_markAsRead_SetBit(void* Obj)
	{
		((BCMessagingProxy_eventGetMessages_Parms*)Obj)->markAsRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_markAsRead = { "markAsRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BCMessagingProxy_eventGetMessages_Parms), &Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_markAsRead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessages_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_in_msgsIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_markAsRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Retrieves list of specified messages.\n    * \n    * Service Name - messaging\n\x09* Service Operation - GET_MESSAGES\n    *\n    * @param in_msgBox The msgBox that the msgIds belong to\n\x09* @param in_msgsIds Array of msg Ids to delete\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Retrieves list of specified messages.\n\nService Name - messaging\nService Operation - GET_MESSAGES\n\n@param in_msgBox The msgBox that the msgIds belong to\n@param in_msgsIds Array of msg Ids to delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "GetMessages", nullptr, nullptr, sizeof(BCMessagingProxy_eventGetMessages_Parms), Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_GetMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_GetMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics
	{
		struct BCMessagingProxy_eventGetMessagesPage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_context;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_in_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_in_context = { "in_context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPage_Parms, in_context), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_in_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_in_context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPage_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_in_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Retrieves a page of messages.\n    * \n    * Service Name - messaging\n\x09* Service Operation - GET_MESSAGES_PAGE\n    *\n    * @param in_context \x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Retrieves a page of messages.\n\nService Name - messaging\nService Operation - GET_MESSAGES_PAGE\n\n@param in_context" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "GetMessagesPage", nullptr, nullptr, sizeof(BCMessagingProxy_eventGetMessagesPage_Parms), Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics
	{
		struct BCMessagingProxy_eventGetMessagesPageOffset_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_context;
			int32 in_pageOffset;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_context;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_in_pageOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPageOffset_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_context = { "in_context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPageOffset_Parms, in_context), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_context_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_pageOffset = { "in_pageOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPageOffset_Parms, in_pageOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventGetMessagesPageOffset_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_in_pageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Retrieves a page of messages.\n    * \n    * Service Name - messaging\n\x09* Service Operation - GET_MESSAGES_PAGE_OFFSET\n    *\n    * @param in_context \n    * @param in_pageOffset \n\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Retrieves a page of messages.\n\nService Name - messaging\nService Operation - GET_MESSAGES_PAGE_OFFSET\n\n@param in_context\n@param in_pageOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "GetMessagesPageOffset", nullptr, nullptr, sizeof(BCMessagingProxy_eventGetMessagesPageOffset_Parms), Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics
	{
		struct BCMessagingProxy_eventMarkMessagesRead_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			FString in_msgBox;
			TArray<FString> in_msgsIds;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_msgBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_msgBox;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_msgsIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_msgsIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_msgsIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventMarkMessagesRead_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgBox = { "in_msgBox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventMarkMessagesRead_Parms, in_msgBox), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgBox_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds_Inner = { "in_msgsIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds = { "in_msgsIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventMarkMessagesRead_Parms, in_msgsIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventMarkMessagesRead_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_in_msgsIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    * Retrieves a page of messages.\n    * \n    * Service Name - messaging\n\x09* Service Operation - MARK_MESSAGES_READ\n    *\n    * @param in_msgBox The msgBox that the msgIds belong to\n\x09* @param in_msgsIds Array of msg Ids to mark as read\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Retrieves a page of messages.\n\nService Name - messaging\nService Operation - MARK_MESSAGES_READ\n\n@param in_msgBox The msgBox that the msgIds belong to\n@param in_msgsIds Array of msg Ids to mark as read" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "MarkMessagesRead", nullptr, nullptr, sizeof(BCMessagingProxy_eventMarkMessagesRead_Parms), Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics
	{
		struct BCMessagingProxy_eventSendMessage_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> in_toProfileIds;
			FString in_contentJson;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_toProfileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_toProfileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_toProfileIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_contentJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_contentJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessage_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds_Inner = { "in_toProfileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds = { "in_toProfileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessage_Parms, in_toProfileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_contentJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_contentJson = { "in_contentJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessage_Parms, in_contentJson), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_contentJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_contentJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessage_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_toProfileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_in_contentJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    *Sends a message with specified 'subject' and 'text' to list of users.\n    * \n    * Service Name - messaging\n\x09* Service Operation - SEND_MESSAGE\n    *\n    * @param in_toProfileIds Array of recipients for the message\n\x09* @param in_messageText Messsage Text\n    * @param in_messageSubject Messsage subject\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Sends a message with specified 'subject' and 'text' to list of users.\n\nService Name - messaging\nService Operation - SEND_MESSAGE\n\n@param in_toProfileIds Array of recipients for the message\n@param in_messageText Messsage Text\n@param in_messageSubject Messsage subject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "SendMessage", nullptr, nullptr, sizeof(BCMessagingProxy_eventSendMessage_Parms), Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics
	{
		struct BCMessagingProxy_eventSendMessageSimple_Parms
		{
			UBrainCloudWrapper* brainCloudWrapper;
			TArray<FString> in_toProfileIds;
			FString in_messageText;
			UBCMessagingProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brainCloudWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_toProfileIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_toProfileIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_in_toProfileIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_messageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_messageText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_brainCloudWrapper = { "brainCloudWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessageSimple_Parms, brainCloudWrapper), Z_Construct_UClass_UBrainCloudWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds_Inner = { "in_toProfileIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds = { "in_toProfileIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessageSimple_Parms, in_toProfileIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_messageText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_messageText = { "in_messageText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessageSimple_Parms, in_messageText), METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_messageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_messageText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BCMessagingProxy_eventSendMessageSimple_Parms, ReturnValue), Z_Construct_UClass_UBCMessagingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_brainCloudWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_toProfileIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_in_messageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BrainCloud|Messaging" },
		{ "Comment", "/**\n    *Sends a message with specified 'subject' and 'text' to list of users.\n    * \n    * Service Name - messaging\n\x09* Service Operation - SEND_MESSAGE_SIMPLE\n    *\n    * @param in_toProfileIds Array of recipients for the message\n\x09* @param in_messageText Messsage Text\x09\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ToolTip", "Sends a message with specified 'subject' and 'text' to list of users.\n\nService Name - messaging\nService Operation - SEND_MESSAGE_SIMPLE\n\n@param in_toProfileIds Array of recipients for the message\n@param in_messageText Messsage Text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBCMessagingProxy, nullptr, "SendMessageSimple", nullptr, nullptr, sizeof(BCMessagingProxy_eventSendMessageSimple_Parms), Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBCMessagingProxy_NoRegister()
	{
		return UBCMessagingProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBCMessagingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBCMessagingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBCBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BCClientPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBCMessagingProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBCMessagingProxy_DeleteMessages, "DeleteMessages" }, // 1898048062
		{ &Z_Construct_UFunction_UBCMessagingProxy_GetMessageBoxes, "GetMessageBoxes" }, // 3220363657
		{ &Z_Construct_UFunction_UBCMessagingProxy_GetMessageCounts, "GetMessageCounts" }, // 127640035
		{ &Z_Construct_UFunction_UBCMessagingProxy_GetMessages, "GetMessages" }, // 2643646491
		{ &Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPage, "GetMessagesPage" }, // 1849985649
		{ &Z_Construct_UFunction_UBCMessagingProxy_GetMessagesPageOffset, "GetMessagesPageOffset" }, // 3958008529
		{ &Z_Construct_UFunction_UBCMessagingProxy_MarkMessagesRead, "MarkMessagesRead" }, // 3418790412
		{ &Z_Construct_UFunction_UBCMessagingProxy_SendMessage, "SendMessage" }, // 3167509977
		{ &Z_Construct_UFunction_UBCMessagingProxy_SendMessageSimple, "SendMessageSimple" }, // 2467199898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBCMessagingProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintProxies/BCMessagingProxy.h" },
		{ "ModuleRelativePath", "Private/BlueprintProxies/BCMessagingProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBCMessagingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBCMessagingProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBCMessagingProxy_Statics::ClassParams = {
		&UBCMessagingProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBCMessagingProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBCMessagingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBCMessagingProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBCMessagingProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBCMessagingProxy, 2531276937);
	template<> BCCLIENTPLUGIN_API UClass* StaticClass<UBCMessagingProxy>()
	{
		return UBCMessagingProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBCMessagingProxy(Z_Construct_UClass_UBCMessagingProxy, &UBCMessagingProxy::StaticClass, TEXT("/Script/BCClientPlugin"), TEXT("UBCMessagingProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBCMessagingProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
