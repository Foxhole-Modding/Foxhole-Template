#include "DestroyedBase.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

ADestroyedBase::ADestroyedBase() {
    this->LastSpawnPointId = 0;
    this->bIsStaticBase = false;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
}

