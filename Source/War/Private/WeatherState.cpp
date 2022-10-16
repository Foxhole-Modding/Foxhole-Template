#include "WeatherState.h"

FWeatherState::FWeatherState() {
    this->MapId = EWorldConquestMapId::Invalid;
    this->Type = EWeatherType::None;
    this->Intensity = 0;
    this->PeakIntensity = 0;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
}

