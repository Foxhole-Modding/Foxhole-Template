#include "DestroyedResourceMine.h"
#include "GenericItemStockpileComponent.h"

ADestroyedResourceMine::ADestroyedResourceMine() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}

