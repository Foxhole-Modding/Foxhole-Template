#include "FortTurretAT.h"
#include "Net/UnrealNetwork.h"

void AFortTurretAT::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTurretAT, PowerInfo);
}

AFortTurretAT::AFortTurretAT() {
}

