#include "TechTreeComponent.h"
#include "Net/UnrealNetwork.h"

void UTechTreeComponent::OnRep_ItemUnlockBits(const int32 PreviousItemUnlockBits) {
}

void UTechTreeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTechTreeComponent, ItemProgress);
    DOREPLIFETIME(UTechTreeComponent, ItemUnlockBits);
    DOREPLIFETIME(UTechTreeComponent, InfrastructureModCount);
}

UTechTreeComponent::UTechTreeComponent() {
    this->DataClass = NULL;
    this->bStartsCompleted = false;
    this->Data = NULL;
    this->ItemUnlockBits = 0;
    this->InfrastructureModCount[0] = 0;
    this->InfrastructureModCount[1] = 0;
    this->InfrastructureModCount[2] = 0;
    this->InfrastructureModCount[3] = 0;
    this->InfrastructureModCount[4] = 0;
}

