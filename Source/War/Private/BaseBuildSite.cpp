#include "BaseBuildSite.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

ABaseBuildSite::ABaseBuildSite() {
    this->bIsStaticBase = false;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->SpawnPointCategory = ESpawnPointCategory::StaticBase;
    this->bIsFirstTier = false;
    this->TunnelNodeProxyClass = NULL;
    this->TunnelNodeProxy = NULL;
    this->bIsBaseUpgrade = true;
    this->TunnelConnectionRange = 0;
}

