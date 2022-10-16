#include "ConcreteFortForwardBase.h"
#include "Net/UnrealNetwork.h"

void AConcreteFortForwardBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteFortForwardBase, ConcreteSettler);
}

AConcreteFortForwardBase::AConcreteFortForwardBase() {
}

