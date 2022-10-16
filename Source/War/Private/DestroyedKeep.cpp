#include "DestroyedKeep.h"
#include "GenericItemStockpileComponent.h"

ADestroyedKeep::ADestroyedKeep() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}

