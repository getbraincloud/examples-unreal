#include "BrainCloudBlockchain.h"

#include "BrainCloudClient.h"
#include "JsonUtil.h"
#include "OperationParam.h"
#include "ServerCall.h"

BrainCloudBlockchain::BrainCloudBlockchain(BrainCloudClient* in_client) : _client(in_client){}

void BrainCloudBlockchain::GetBlockchainItems(FString in_integrationID, FString in_contextJson,
	IServerCallback* in_callback)
{
	TSharedRef<FJsonObject> message = MakeShareable(new FJsonObject());
	
	message->SetStringField(OperationParam::BlockChainIntegrationId.getValue(), in_integrationID);
	message->SetObjectField(OperationParam::BlockChainContext.getValue(), JsonUtil::jsonStringToValue(in_contextJson));

	ServerCall *sc = new ServerCall(ServiceName::Blockchain, ServiceOperation::GetBlockchainItems, message, in_callback);
	_client->sendRequest(sc);
}

void BrainCloudBlockchain::GetUniqs(FString in_integrationID, FString in_contextJson, IServerCallback* in_callback)
{
	TSharedRef<FJsonObject> message = MakeShareable(new FJsonObject());

	message->SetStringField(OperationParam::BlockChainIntegrationId.getValue(), in_integrationID);
	message->SetObjectField(OperationParam::BlockChainContext.getValue(), JsonUtil::jsonStringToValue(in_contextJson));

	ServerCall *sc = new ServerCall(ServiceName::Blockchain, ServiceOperation::GetUniqs, message, in_callback);
	_client->sendRequest(sc);
}
