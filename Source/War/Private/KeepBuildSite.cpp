#include "KeepBuildSite.h"
#include "GenericItemStockpileComponent.h"

AKeepBuildSite::AKeepBuildSite() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
}

