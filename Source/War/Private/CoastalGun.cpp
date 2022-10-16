#include "CoastalGun.h"

void ACoastalGun::MulticastPlayImpactAndTargetFX_Implementation(const FHitResult& HitResult, const FVector WarningShotAimOffset) {
}

ACoastalGun::ACoastalGun() {
    this->WarningShotMinRange = 16000.00f;
    this->WarningShotRadius = 1500.00f;
}

