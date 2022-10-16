#include "ConcreteFortTurret.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortTurret, ConcreteSettler);
}

AConcreteFortTurret::AConcreteFortTurret() {
}

