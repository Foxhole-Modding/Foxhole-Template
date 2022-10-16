#include "RocketImpactEffect.h"
#include "Components/ArrowComponent.h"

ARocketImpactEffect::ARocketImpactEffect() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
}

