#include "DayNightCycleManager.h"
#include "Net/UnrealNetwork.h"

void ADayNightCycleManager::OnRep_SunAngleQuantized() {
}

void ADayNightCycleManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADayNightCycleManager, SunSpeed);
    DOREPLIFETIME(ADayNightCycleManager, NightSunSpeed);
    DOREPLIFETIME(ADayNightCycleManager, Day);
    DOREPLIFETIME(ADayNightCycleManager, SunAngleQuantized);
}

ADayNightCycleManager::ADayNightCycleManager() {
    this->LightSource = NULL;
    this->MoonLightSource = NULL;
    this->SkyLight = NULL;
    this->PostProcessVolume = NULL;
    this->ExponentialHeightFog = NULL;
    this->DayReflectionCapture = NULL;
    this->NightReflectionCapture = NULL;
    this->LightDayIntensity = 8.00f;
    this->LightNightIntensity = 0.00f;
    this->DirectionalLightColorCurve = NULL;
    this->MoonLightColorCurve = NULL;
    this->MoonLightIntensityCurve = NULL;
    this->MoonLightAngleCurve = NULL;
    this->VisibilityRadiusIntensityCurve = NULL;
    this->FogColorCurve = NULL;
    this->FogFalloffCurve = NULL;
    this->DayReflectionBrightness = NULL;
    this->NightReflectionBrightness = NULL;
    this->SkyLightIntensity = NULL;
    this->LatitudeRotation = -30.00f;
    this->SunSpeed = 0.15f;
    this->NightSunSpeed = 0.00f;
    this->CubeMapSamples.AddDefaulted(8);
    this->bDebugCaptureEveryframe = false;
    this->Day = 0;
    this->MaxNightVisibilityRadius = 3500.00f;
    this->MinNightVisibilityRadius = 1500.00f;
    this->bIsNight = false;
    this->SunAngle = 0.00f;
    this->SunAngleQuantized = 0;
    this->EnvironmentalModificationData = NULL;
}

