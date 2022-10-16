#include "TunnelNodeProxy.h"
#include "Net/UnrealNetwork.h"

void ATunnelNodeProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATunnelNodeProxy, ProxyConnectionRange);
}

ATunnelNodeProxy::ATunnelNodeProxy() {
    this->ProxyConnectionRange = 4000.00f;
}

