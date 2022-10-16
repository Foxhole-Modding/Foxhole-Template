#include "ConcreteFortCorner.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortCorner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortCorner, ConcreteSettler);
}

AConcreteFortCorner::AConcreteFortCorner() {
}

