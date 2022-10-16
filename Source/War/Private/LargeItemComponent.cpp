#include "LargeItemComponent.h"
#include "Net/UnrealNetwork.h"

void ULargeItemComponent::OnRep_IsEquipped() {
}

void ULargeItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULargeItemComponent, bIsEquipped);
}

ULargeItemComponent::ULargeItemComponent() {
    this->Mesh = NULL;
    this->bIsEquipped = false;
}

