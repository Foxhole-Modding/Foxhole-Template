#include "TunnelNode.h"
#include "Net/UnrealNetwork.h"

void ATunnelNode::OnRep_ConnectionState() {
}

void ATunnelNode::BPSetTunnelConnectionStateVisuals_Implementation(const ETunnelConnectionState NewTunnelConnectionState) {
}

void ATunnelNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATunnelNode, ConnectionState);
}

ATunnelNode::ATunnelNode() {
    this->TunnelNodeType = ETunnelNodeType::Terminal;
    this->bCanBeHidden = false;
    this->ConnectionState = ETunnelConnectionState::DisconnectedStarved;
}

