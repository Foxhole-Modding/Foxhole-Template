#include "OccupiableComponent.h"
#include "Net/UnrealNetwork.h"

void UOccupiableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOccupiableComponent, CurrentOccupant);
}

UOccupiableComponent::UOccupiableComponent() {
    this->bProvidesFullCover = true;
    this->bTeleportBack = true;
    this->bCanOccupantSeeThroughEverything = false;
    this->TriggerComponent = NULL;
}

