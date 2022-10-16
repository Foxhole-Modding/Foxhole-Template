#include "ConcreteFortTurretAT.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortTurretAT::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortTurretAT, ConcreteSettler);
}

AConcreteFortTurretAT::AConcreteFortTurretAT() {
}

