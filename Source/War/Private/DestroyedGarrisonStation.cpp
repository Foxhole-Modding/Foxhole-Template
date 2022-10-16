#include "DestroyedGarrisonStation.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

ADestroyedGarrisonStation::ADestroyedGarrisonStation() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->LastSpawnPointId = 0;
}

