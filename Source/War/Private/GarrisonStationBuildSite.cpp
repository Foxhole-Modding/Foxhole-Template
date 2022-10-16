#include "GarrisonStationBuildSite.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

AGarrisonStationBuildSite::AGarrisonStationBuildSite() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
}

