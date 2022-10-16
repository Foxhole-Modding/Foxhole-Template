#include "SpecializedFactory.h"
#include "SpecializedFactoryComponent.h"

ASpecializedFactory::ASpecializedFactory() {
    this->SpecializedFactoryComponent = CreateDefaultSubobject<USpecializedFactoryComponent>(TEXT("SpecializedFactoryComponent"));
}

