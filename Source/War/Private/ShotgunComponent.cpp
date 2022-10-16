#include "ShotgunComponent.h"
#include "Net/UnrealNetwork.h"

void UShotgunComponent::OnRep_SimulatedHitNotifies() {
}

void UShotgunComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UShotgunComponent, SimulatedHitNotifies);
}

UShotgunComponent::UShotgunComponent() {
}

