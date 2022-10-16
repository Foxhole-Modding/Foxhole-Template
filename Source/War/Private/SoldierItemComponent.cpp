#include "SoldierItemComponent.h"
#include "Net/UnrealNetwork.h"

void USoldierItemComponent::OnRep_SoldierVisuals() {
}

void USoldierItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USoldierItemComponent, SoldierVisualsPacked);
}

USoldierItemComponent::USoldierItemComponent() {
    this->SoldierVisualsPacked = 0;
}

