#include "ConstructionSiteBuildSite.h"
#include "CraneSpawnLocationComponent.h"

AConstructionSiteBuildSite::AConstructionSiteBuildSite() {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

