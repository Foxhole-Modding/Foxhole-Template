#include "ItemHolderUserComponent.h"
#include "Net/UnrealNetwork.h"

void UItemHolderUserComponent::OnRep_Items() {
}

void UItemHolderUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemHolderUserComponent, Items);
}

UItemHolderUserComponent::UItemHolderUserComponent() {
}

