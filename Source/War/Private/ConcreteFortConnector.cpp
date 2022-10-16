#include "ConcreteFortConnector.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortConnector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortConnector, ConcreteSettler);
}

AConcreteFortConnector::AConcreteFortConnector() {
}

