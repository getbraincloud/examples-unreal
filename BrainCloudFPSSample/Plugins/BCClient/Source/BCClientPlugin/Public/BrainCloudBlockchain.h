#pragma once

class BrainCloudClient;
class IServerCallback;

class BCCLIENTPLUGIN_API BrainCloudBlockchain
{
public:
	BrainCloudBlockchain(BrainCloudClient *in_client);

	/**
	 * @brief Retrieves the blockchain items owned by the caller. 
	 */
	void GetBlockchainItems(FString in_integrationID ,FString in_contextJson, IServerCallback *in_callback);
	/**
	 * @brief Retrieves the uniqs owned by the caller.
	 */
	void GetUniqs(FString in_integrationID ,FString in_contextJson, IServerCallback *in_callback);

private:
	BrainCloudClient *_client = nullptr;
};
