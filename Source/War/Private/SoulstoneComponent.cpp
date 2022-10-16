#include "SoulstoneComponent.h"
#include "Net/UnrealNetwork.h"

void USoulstoneComponent::ServerUseSoulstone_Implementation(FActivityStateChange ActivityStateChange) {
}
bool USoulstoneComponent::ServerUseSoulstone_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void USoulstoneComponent::OnRep_IsEquipped() {
}

void USoulstoneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USoulstoneComponent, bIsEquipped);
}

USoulstoneComponent::USoulstoneComponent() {
    this->TransformExplosionEffect = NULL;
    this->bIsEquipped = false;
}

