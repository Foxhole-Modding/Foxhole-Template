#include "FirstAidKitComponent.h"
#include "Net/UnrealNetwork.h"

void UFirstAidKitComponent::ServerUseFirstAidKit_Implementation() {
}
bool UFirstAidKitComponent::ServerUseFirstAidKit_Validate() {
    return true;
}

void UFirstAidKitComponent::ServerStartActivityState_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UFirstAidKitComponent::ServerStartActivityState_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UFirstAidKitComponent::ServerCancelActivityState_Implementation() {
}
bool UFirstAidKitComponent::ServerCancelActivityState_Validate() {
    return true;
}

void UFirstAidKitComponent::OnRep_IsEquipped() {
}

void UFirstAidKitComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFirstAidKitComponent, bIsEquipped);
}

UFirstAidKitComponent::UFirstAidKitComponent() {
    this->HealAmountPerApplication = 25.00f;
    this->HealApplicationInterval_Sec = 1.00f;
    this->HealingChargesPerBandage = 10;
    this->FirstAidKitMesh = NULL;
    this->FirstAidApplicationSound = NULL;
    this->DebugDrawTraces = true;
    this->bIsEquipped = false;
}

