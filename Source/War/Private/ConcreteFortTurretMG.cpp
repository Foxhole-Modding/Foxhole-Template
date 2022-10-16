#include "ConcreteFortTurretMG.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortTurretMG::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortTurretMG, ConcreteSettler);
}

AConcreteFortTurretMG::AConcreteFortTurretMG() {
}

