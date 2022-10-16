#include "ConcreteFort.h"
#include "Net/UnrealNetwork.h"

void AConcreteFort::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFort, ConcreteSettler);
}

AConcreteFort::AConcreteFort() {
}

