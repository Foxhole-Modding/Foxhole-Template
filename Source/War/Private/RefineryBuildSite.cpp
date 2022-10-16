#include "RefineryBuildSite.h"
#include "GenericItemStockpileComponent.h"
#include "CraneSpawnLocationComponent.h"

ARefineryBuildSite::ARefineryBuildSite() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

