#include "BinocularsItemComponent.h"
#include "Net/UnrealNetwork.h"

void UBinocularsItemComponent::ServerStartStopScope_Implementation(bool IsStartScope, FActivityStateChange ActivityStateChange) {
}
bool UBinocularsItemComponent::ServerStartStopScope_Validate(bool IsStartScope, FActivityStateChange ActivityStateChange) {
    return true;
}

void UBinocularsItemComponent::OnRep_IsEquipped() {
}

void UBinocularsItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBinocularsItemComponent, bIsEquipped);
}

UBinocularsItemComponent::UBinocularsItemComponent() {
    this->SkeletalMesh = NULL;
    this->bIsEquipped = false;
}

