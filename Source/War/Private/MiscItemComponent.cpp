#include "MiscItemComponent.h"
#include "Net/UnrealNetwork.h"

void UMiscItemComponent::OnRep_IsEquipped() {
}

void UMiscItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMiscItemComponent, bIsEquipped);
}

UMiscItemComponent::UMiscItemComponent() {
    this->bIsEquipped = false;
}

