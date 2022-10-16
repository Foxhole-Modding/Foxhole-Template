#include "FuelItemComponent.h"
#include "Net/UnrealNetwork.h"

void UFuelItemComponent::ServerStartActivityState_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UFuelItemComponent::ServerStartActivityState_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UFuelItemComponent::ServerRefuelTarget_Implementation() {
}
bool UFuelItemComponent::ServerRefuelTarget_Validate() {
    return true;
}

void UFuelItemComponent::ServerCancelActivityState_Implementation() {
}
bool UFuelItemComponent::ServerCancelActivityState_Validate() {
    return true;
}

void UFuelItemComponent::OnRep_IsEquipped() {
}

void UFuelItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFuelItemComponent, bIsEquipped);
}

UFuelItemComponent::UFuelItemComponent() {
    this->FuelCapacity = 100;
    this->RefuelSound = NULL;
    this->bIsEquipped = false;
}

