#include "RocketGroundZero.h"
#include "Components/ArrowComponent.h"

ARocketGroundZero::ARocketGroundZero() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->DamageDuration = 1.00f;
}

