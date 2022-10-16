#include "DestroyedMassProductionFactory.h"
#include "CraneSpawnLocationComponent.h"

ADestroyedMassProductionFactory::ADestroyedMassProductionFactory() {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

