#include "LightTank.h"
#include "Net/UnrealNetwork.h"

void ALightTank::OnRep_GunnerYawAndPitch() {
}

bool ALightTank::GetIsShooting() const {
    return false;
}

float ALightTank::GetGunYaw() const {
    return 0.0f;
}

float ALightTank::GetGunPitch() const {
    return 0.0f;
}

void ALightTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALightTank, GunnerYawAndPitch);
    DOREPLIFETIME(ALightTank, StashedAmmoType);
}

ALightTank::ALightTank() {
    this->StashedAmmo = 0;
}

