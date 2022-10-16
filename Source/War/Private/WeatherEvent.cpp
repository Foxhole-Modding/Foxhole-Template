#include "WeatherEvent.h"

FWeatherEvent::FWeatherEvent() {
    this->MapId = EWorldConquestMapId::Invalid;
    this->Type = EWeatherType::None;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->Intensity = 0.00f;
    this->Delay = 0;
    this->Duration = 0;
    this->IntensityCurveIndex = 0;
}

