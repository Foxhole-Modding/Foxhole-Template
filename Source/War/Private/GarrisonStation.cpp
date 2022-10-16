#include "GarrisonStation.h"
#include "Net/UnrealNetwork.h"
#include "GenericItemStockpileComponent.h"
#include "MapIntelligenceSourceComponent.h"
#include "TechTreeComponent.h"

void AGarrisonStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGarrisonStation, DecayInfo);
}

AGarrisonStation::AGarrisonStation() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->MapIntelligenceSourceComponent = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSource"));
    this->TunnelConnectionRange = 0.00f;
}

