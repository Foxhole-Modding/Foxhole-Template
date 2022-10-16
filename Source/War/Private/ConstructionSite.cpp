#include "ConstructionSite.h"
#include "Components/BoxComponent.h"
#include "CraneSpawnLocationComponent.h"

bool AConstructionSite::IsBuildLocationBlocked() const {
    return false;
}

AConstructionSite::AConstructionSite() {
    this->BuildLocationFilter = EBuildLocationType::None;
    this->GarageFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GarageFootprint"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
}

