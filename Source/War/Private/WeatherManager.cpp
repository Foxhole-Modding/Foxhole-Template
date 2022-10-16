#include "WeatherManager.h"

UWeatherManager::UWeatherManager() {
    this->DataClass = NULL;
    this->MaterialParameterCollection = NULL;
    this->FogVisibilityMultiplier = 1.00f;
    this->FogMaterial = NULL;
    this->FogBlendCurve = NULL;
    this->EffectsLookAheadScale = 1.00f;
}

