#include "TankEngineerComponent.h"

void UTankEngineerComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UTankEngineerComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UTankEngineerComponent::ServerRepair_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UTankEngineerComponent::ServerRepair_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UTankEngineerComponent::MulticastRepairFX_Implementation() {
}

void UTankEngineerComponent::MulticastReloadFX_Implementation() {
}

UTankEngineerComponent::UTankEngineerComponent() {
    this->TargetMountIndex = 0;
    this->RepairAmount = 1;
    this->ReloadSoundCue = NULL;
    this->RepairSoundCue = NULL;
}

