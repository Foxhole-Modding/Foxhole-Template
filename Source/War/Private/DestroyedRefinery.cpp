#include "DestroyedRefinery.h"
#include "GenericItemStockpileComponent.h"
#include "CraneSpawnLocationComponent.h"

ADestroyedRefinery::ADestroyedRefinery() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

