// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BCClientPlugin/Public/BrainCloudClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainCloudClient() {}
// Cross Module References
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_BCWebsocketStatus();
	UPackage* Z_Construct_UPackage__Script_BCClientPlugin();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionStatus();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType();
	BCCLIENTPLUGIN_API UEnum* Z_Construct_UEnum_BCClientPlugin_eBCUpdateType();
// End Cross Module References
	static UEnum* BCWebsocketStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_BCWebsocketStatus, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("BCWebsocketStatus"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCWebsocketStatus>()
	{
		return BCWebsocketStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BCWebsocketStatus(BCWebsocketStatus_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("BCWebsocketStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_BCWebsocketStatus_Hash() { return 1125831066U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_BCWebsocketStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BCWebsocketStatus"), 0, Get_Z_Construct_UEnum_BCClientPlugin_BCWebsocketStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BCWebsocketStatus::OPEN", (int64)BCWebsocketStatus::OPEN },
				{ "BCWebsocketStatus::CLOSED", (int64)BCWebsocketStatus::CLOSED },
				{ "BCWebsocketStatus::MESSAGE", (int64)BCWebsocketStatus::MESSAGE },
				{ "BCWebsocketStatus::SOCKETERROR", (int64)BCWebsocketStatus::SOCKETERROR },
				{ "BCWebsocketStatus::NONE", (int64)BCWebsocketStatus::NONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CLOSED.DisplayName", "CLOSED" },
				{ "CLOSED.Name", "BCWebsocketStatus::CLOSED" },
				{ "MESSAGE.DisplayName", "MESSAGE" },
				{ "MESSAGE.Name", "BCWebsocketStatus::MESSAGE" },
				{ "ModuleRelativePath", "Public/BrainCloudClient.h" },
				{ "NONE.DisplayName", "NONE" },
				{ "NONE.Name", "BCWebsocketStatus::NONE" },
				{ "OPEN.DisplayName", "OPEN" },
				{ "OPEN.Name", "BCWebsocketStatus::OPEN" },
				{ "SOCKETERROR.DisplayName", "SOCKETERROR" },
				{ "SOCKETERROR.Name", "BCWebsocketStatus::SOCKETERROR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"BCWebsocketStatus",
				"BCWebsocketStatus",
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
	static UEnum* BCRTTConnectionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionStatus, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("BCRTTConnectionStatus"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCRTTConnectionStatus>()
	{
		return BCRTTConnectionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BCRTTConnectionStatus(BCRTTConnectionStatus_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("BCRTTConnectionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionStatus_Hash() { return 2895914598U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BCRTTConnectionStatus"), 0, Get_Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BCRTTConnectionStatus::CONNECTED", (int64)BCRTTConnectionStatus::CONNECTED },
				{ "BCRTTConnectionStatus::CONNECTING", (int64)BCRTTConnectionStatus::CONNECTING },
				{ "BCRTTConnectionStatus::DISCONNECTED", (int64)BCRTTConnectionStatus::DISCONNECTED },
				{ "BCRTTConnectionStatus::DISCONNECTING", (int64)BCRTTConnectionStatus::DISCONNECTING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONNECTED.DisplayName", "CONNECTED" },
				{ "CONNECTED.Name", "BCRTTConnectionStatus::CONNECTED" },
				{ "CONNECTING.DisplayName", "CONNECTING" },
				{ "CONNECTING.Name", "BCRTTConnectionStatus::CONNECTING" },
				{ "DISCONNECTED.DisplayName", "DISCONNECTED" },
				{ "DISCONNECTED.Name", "BCRTTConnectionStatus::DISCONNECTED" },
				{ "DISCONNECTING.DisplayName", "DISCONNECTING" },
				{ "DISCONNECTING.Name", "BCRTTConnectionStatus::DISCONNECTING" },
				{ "ModuleRelativePath", "Public/BrainCloudClient.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"BCRTTConnectionStatus",
				"BCRTTConnectionStatus",
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
	static UEnum* BCRelayConnectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("BCRelayConnectionType"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCRelayConnectionType>()
	{
		return BCRelayConnectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BCRelayConnectionType(BCRelayConnectionType_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("BCRelayConnectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType_Hash() { return 998500850U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BCRelayConnectionType"), 0, Get_Z_Construct_UEnum_BCClientPlugin_BCRelayConnectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BCRelayConnectionType::WEBSOCKET", (int64)BCRelayConnectionType::WEBSOCKET },
				{ "BCRelayConnectionType::TCP", (int64)BCRelayConnectionType::TCP },
				{ "BCRelayConnectionType::UDP", (int64)BCRelayConnectionType::UDP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BrainCloudClient.h" },
				{ "TCP.DisplayName", "TCP" },
				{ "TCP.Name", "BCRelayConnectionType::TCP" },
				{ "UDP.DisplayName", "UDP" },
				{ "UDP.Name", "BCRelayConnectionType::UDP" },
				{ "WEBSOCKET.DisplayName", "WEBSOCKET" },
				{ "WEBSOCKET.Name", "BCRelayConnectionType::WEBSOCKET" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"BCRelayConnectionType",
				"BCRelayConnectionType",
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
	static UEnum* BCRTTConnectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("BCRTTConnectionType"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<BCRTTConnectionType>()
	{
		return BCRTTConnectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BCRTTConnectionType(BCRTTConnectionType_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("BCRTTConnectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType_Hash() { return 3841590629U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BCRTTConnectionType"), 0, Get_Z_Construct_UEnum_BCClientPlugin_BCRTTConnectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BCRTTConnectionType::WEBSOCKET", (int64)BCRTTConnectionType::WEBSOCKET },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BrainCloudClient.h" },
				{ "WEBSOCKET.DisplayName", "WEBSOCKET" },
				{ "WEBSOCKET.Name", "BCRTTConnectionType::WEBSOCKET" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"BCRTTConnectionType",
				"BCRTTConnectionType",
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
	static UEnum* eBCUpdateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BCClientPlugin_eBCUpdateType, Z_Construct_UPackage__Script_BCClientPlugin(), TEXT("eBCUpdateType"));
		}
		return Singleton;
	}
	template<> BCCLIENTPLUGIN_API UEnum* StaticEnum<eBCUpdateType>()
	{
		return eBCUpdateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eBCUpdateType(eBCUpdateType_StaticEnum, TEXT("/Script/BCClientPlugin"), TEXT("eBCUpdateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BCClientPlugin_eBCUpdateType_Hash() { return 2854876772U; }
	UEnum* Z_Construct_UEnum_BCClientPlugin_eBCUpdateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BCClientPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eBCUpdateType"), 0, Get_Z_Construct_UEnum_BCClientPlugin_eBCUpdateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eBCUpdateType::ALL", (int64)eBCUpdateType::ALL },
				{ "eBCUpdateType::REST", (int64)eBCUpdateType::REST },
				{ "eBCUpdateType::RTT", (int64)eBCUpdateType::RTT },
				{ "eBCUpdateType::RS", (int64)eBCUpdateType::RS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL.DisplayName", "ALL" },
				{ "ALL.Name", "eBCUpdateType::ALL" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BrainCloudClient.h" },
				{ "REST.DisplayName", "REST" },
				{ "REST.Name", "eBCUpdateType::REST" },
				{ "RS.DisplayName", "RS" },
				{ "RS.Name", "eBCUpdateType::RS" },
				{ "RTT.DisplayName", "RTT" },
				{ "RTT.Name", "eBCUpdateType::RTT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BCClientPlugin,
				nullptr,
				"eBCUpdateType",
				"eBCUpdateType",
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
