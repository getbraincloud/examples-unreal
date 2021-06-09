// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#pragma once

class BCCLIENTPLUGIN_API IRelaySystemCallback
{
public:
	/**
	* System message from the Relay Service
	*
	* @param jsonResponse - System message in json string.
	*/
	virtual void relaySystemCallback(const FString& jsonResponse) = 0;
};
