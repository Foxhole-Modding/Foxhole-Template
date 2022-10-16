#include "WeatherActor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

AWeatherActor::AWeatherActor() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->FreezeBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("FreezeBox"));
    this->WeatherType = EWeatherType::None;
    this->ParameterCurve = NULL;
    this->TransitionDuration = 0.00f;
}

