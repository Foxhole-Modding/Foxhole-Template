#include "SpecializedFactoryBuildSite.h"
#include "SpecializedFactoryComponent.h"

ASpecializedFactoryBuildSite::ASpecializedFactoryBuildSite() {
    this->SpecializedFactoryComponent = CreateDefaultSubobject<USpecializedFactoryComponent>(TEXT("SpecializedFactoryComponent"));
}

