#include "FuelContainer.h"
#include "Net/UnrealNetwork.h"

void AFuelContainer::OnRep_FuelTankerInfo() {
}

void AFuelContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelContainer, FuelTankerInfo);
}

AFuelContainer::AFuelContainer() {
}

