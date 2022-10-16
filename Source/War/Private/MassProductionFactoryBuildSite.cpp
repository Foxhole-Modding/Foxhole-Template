#include "MassProductionFactoryBuildSite.h"
#include "CraneSpawnLocationComponent.h"

AMassProductionFactoryBuildSite::AMassProductionFactoryBuildSite() {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

