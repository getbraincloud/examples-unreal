#include "BCRelaySystemCallbackProxy.h"
#include "BCWrapperProxy.h"

UBCRelaySystemCallbackProxy::UBCRelaySystemCallbackProxy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UBCRelaySystemCallbackProxy* UBCRelaySystemCallbackProxy::RegisterRelaySystemCallback(UBrainCloudWrapper* brainCloudWrapper)
{
	UBCRelaySystemCallbackProxy *Proxy = NewObject<UBCRelaySystemCallbackProxy>();
	UBCWrapperProxy::GetBrainCloudInstance(brainCloudWrapper)->getRelayService()->registerRelaySystemCallback(Proxy);
	return Proxy;
}
