// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#pragma once

class BCCLIENTPLUGIN_API IRelayCallback
{
  public:
    /**
     */
    virtual void relayCallback(uint8 netId,const TArray<uint8>& jsonData) = 0;
};
