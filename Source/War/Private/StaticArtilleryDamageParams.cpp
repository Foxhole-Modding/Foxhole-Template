#include "StaticArtilleryDamageParams.h"

FStaticArtilleryDamageParams::FStaticArtilleryDamageParams() {
    this->Type = NULL;
    this->BaseAmount = 0.00f;
    this->Radius = 0.00f;
    this->InnerRadius = 0.00f;
    this->Falloff = 0.00f;
    this->AccuracyRadius = 0.00f;
    this->ExplosionClass = NULL;
    this->ShotSoundCue = NULL;
}

