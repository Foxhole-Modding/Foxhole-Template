#include "BattleTank.h"
#include "Net/UnrealNetwork.h"

void ABattleTank::OnRep_StashedAmmo() {
}

void ABattleTank::OnRep_AlternateStashedAmmo() {
}

bool ABattleTank::GetIsMainGunFiring() const {
    return false;
}

void ABattleTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattleTank, MainGunYaw);
    DOREPLIFETIME(ABattleTank, MainGunPitch);
    DOREPLIFETIME(ABattleTank, AlternateGunYaw);
    DOREPLIFETIME(ABattleTank, AlternateGunPitch);
    DOREPLIFETIME(ABattleTank, Alternate2GunYaw);
    DOREPLIFETIME(ABattleTank, Alternate2GunPitch);
    DOREPLIFETIME(ABattleTank, StashedAmmoType);
    DOREPLIFETIME(ABattleTank, AlternateStashedAmmoType);
    DOREPLIFETIME(ABattleTank, Alternate2StashedAmmoType);
    DOREPLIFETIME(ABattleTank, StashedAmmo);
    DOREPLIFETIME(ABattleTank, AlternateStashedAmmo);
    DOREPLIFETIME(ABattleTank, Alternate2StashedAmmo);
}

ABattleTank::ABattleTank() {
    this->MainGunYaw = 0.00f;
    this->MainGunPitch = 0.00f;
    this->AlternateGunYaw = 0.00f;
    this->AlternateGunPitch = 0.00f;
    this->Alternate2GunYaw = 0.00f;
    this->Alternate2GunPitch = 0.00f;
    this->StashedAmmo = 0;
    this->AlternateStashedAmmo = 0;
    this->Alternate2StashedAmmo = 0;
}

