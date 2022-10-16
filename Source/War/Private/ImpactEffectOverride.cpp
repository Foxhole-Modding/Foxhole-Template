#include "ImpactEffectOverride.h"

FImpactEffectOverride::FImpactEffectOverride() {
    this->PhysicalSurface = SurfaceType_Default;
    this->EmitterTemplate = NULL;
    this->HitSound = NULL;
    this->bOrientToHitDirection = false;
    this->DamageThreshold = 0.00f;
}

