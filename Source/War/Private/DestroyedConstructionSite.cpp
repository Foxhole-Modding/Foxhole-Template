#include "DestroyedConstructionSite.h"
#include "CraneSpawnLocationComponent.h"

ADestroyedConstructionSite::ADestroyedConstructionSite() {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

