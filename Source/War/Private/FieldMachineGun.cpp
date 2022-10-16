#include "FieldMachineGun.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"

bool AFieldMachineGun::GetIsFiring() const {
    return false;
}

FVector2D AFieldMachineGun::GetGunnerYawAndPitch(int32 GunnerIndex) const {
    return FVector2D{};
}

void AFieldMachineGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFieldMachineGun, GunnerYawAndPitch);
    DOREPLIFETIME(AFieldMachineGun, StashedAmmoType);
}

AFieldMachineGun::AFieldMachineGun() {
    this->MuzzleFlashPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlashPS"));
    this->FiringSound = NULL;
    this->StashedAmmo = 0;
}

