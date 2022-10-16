#include "ShippingContainer.h"
#include "Net/UnrealNetwork.h"

void AShippingContainer::OnRep_Color() {
}

void AShippingContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShippingContainer, ColorIndex);
}

AShippingContainer::AShippingContainer() {
    this->ResourceGroupRenderComponent = NULL;
    this->ColorIndex = 0;
}

