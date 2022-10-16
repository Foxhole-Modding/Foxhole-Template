#include "MountDynamicData.h"

FMountDynamicData::FMountDynamicData() {
    this->SuppressionMultiplier = 0.00f;
    this->MaxHorizontalDeviation = 0.00f;
    this->MaxVerticalDeviation = 0.00f;
    this->CoverProvided = 0.00f;
    this->TrackingSpeed = 0.00f;
    this->TrackingThreshold = 0.00f;
    this->MaxAmmo = 0;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->MaxReachability = 0.00f;
    this->ScopeRadius = 0;
    this->MinYaw = 0.00f;
    this->MaxYaw = 0.00f;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->FiringDuration = 0.00f;
    this->ReloadDuration = 0.00f;
    this->DamageMultiplier = 0.00f;
    this->ArtilleryAccuracyMinDist = 0.00f;
    this->ArtilleryAccuracyMaxDist = 0.00f;
    this->AddedBurningMultiplier = 0.00f;
}

