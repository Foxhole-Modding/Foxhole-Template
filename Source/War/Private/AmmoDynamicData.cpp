#include "AmmoDynamicData.h"

FAmmoDynamicData::FAmmoDynamicData() {
    this->Damage = 0.00f;
    this->Suppression = 0.00f;
    this->ExplosionRadius = 0.00f;
    this->DamageType = NULL;
    this->DamageInnerRadius = 0.00f;
    this->DamageFalloff = 0.00f;
    this->AccuracyRadius = 0.00f;
    this->EnvironmentImpactAmount = 0;
    this->AddedBurning = 0.00f;
    this->AddedHeat = 0.00f;
}

