#include "ResourceMineBuildSite.h"
#include "GenericItemStockpileComponent.h"

AResourceMineBuildSite::AResourceMineBuildSite() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}

