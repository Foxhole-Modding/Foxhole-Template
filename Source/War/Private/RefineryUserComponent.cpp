#include "RefineryUserComponent.h"
#include "Net/UnrealNetwork.h"

void URefineryUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URefineryUserComponent, OrderInfo);
}

URefineryUserComponent::URefineryUserComponent() {
}

