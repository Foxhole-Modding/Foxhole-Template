#include "FacilityRefineryUserComponent.h"
#include "Net/UnrealNetwork.h"

void UFacilityRefineryUserComponent::ServerSetCurrentConversionInfo_Implementation(const int8 Index) {
}

void UFacilityRefineryUserComponent::OnRep_Progress() {
}

void UFacilityRefineryUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFacilityRefineryUserComponent, Progress);
}

UFacilityRefineryUserComponent::UFacilityRefineryUserComponent() {
    this->Progress = 0.00f;
}

