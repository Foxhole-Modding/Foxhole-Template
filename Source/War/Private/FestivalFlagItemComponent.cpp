#include "FestivalFlagItemComponent.h"
#include "Net/UnrealNetwork.h"

void UFestivalFlagItemComponent::OnRep_TeamID() {
}

void UFestivalFlagItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFestivalFlagItemComponent, TeamId);
}

UFestivalFlagItemComponent::UFestivalFlagItemComponent() {
    this->WalkingSpeedScale = 1.00f;
    this->TeamId = 255;
}

