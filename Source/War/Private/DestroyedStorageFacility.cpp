#include "DestroyedStorageFacility.h"
#include "GenericStockpileComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "ReserveStockpileComponent.h"

ADestroyedStorageFacility::ADestroyedStorageFacility() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ReserveStockpileComponent = CreateDefaultSubobject<UReserveStockpileComponent>(TEXT("ReserveStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

