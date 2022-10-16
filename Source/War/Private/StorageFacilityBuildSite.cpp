#include "StorageFacilityBuildSite.h"
#include "GenericStockpileComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "ReserveStockpileComponent.h"

AStorageFacilityBuildSite::AStorageFacilityBuildSite() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ReserveStockpileComponent = CreateDefaultSubobject<UReserveStockpileComponent>(TEXT("ReserveStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

