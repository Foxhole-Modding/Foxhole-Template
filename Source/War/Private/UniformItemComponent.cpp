#include "UniformItemComponent.h"
#include "Net/UnrealNetwork.h"

void UUniformItemComponent::OnRep_UniformType() {
}

void UUniformItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUniformItemComponent, UniformType);
}

UUniformItemComponent::UUniformItemComponent() {
    this->UniformType = EUniformType::Default;
}

