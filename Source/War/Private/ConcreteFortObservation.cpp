#include "ConcreteFortObservation.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortObservation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortObservation, ConcreteSettler);
}

AConcreteFortObservation::AConcreteFortObservation() {
}

