#include "FlareExplosionEffect.h"

AFlareExplosionEffect::AFlareExplosionEffect() {
    this->AltitudeCurve = NULL;
    this->IlluminationRadius = 0.00f;
    this->VisibilityIndicatorRadius = 0.00f;
    this->LightFX = NULL;
    this->MaxActiveLightsInRange = 5;
    this->MaxLightCullingRange = 0.00f;
    this->LightParticleSystem = NULL;
}

