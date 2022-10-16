#include "DestroyedSpecializedFactory.h"
#include "SpecializedFactoryComponent.h"

ADestroyedSpecializedFactory::ADestroyedSpecializedFactory() {
    this->SpecializedFactoryComponent = CreateDefaultSubobject<USpecializedFactoryComponent>(TEXT("SpecializedFactoryComponent"));
}

