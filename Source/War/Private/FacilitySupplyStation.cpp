#include "FacilitySupplyStation.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

void AFacilitySupplyStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilitySupplyStation, DecayInfo);
}

AFacilitySupplyStation::AFacilitySupplyStation() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->SupplyRange = 4000.00f;
}

