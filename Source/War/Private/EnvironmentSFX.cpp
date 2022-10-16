#include "EnvironmentSFX.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"

AEnvironmentSFX::AEnvironmentSFX() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->DayTimeSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("DayTimeSFX"));
    this->NightTimeSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("NightTimeSFX"));
}

