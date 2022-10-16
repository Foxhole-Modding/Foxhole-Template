#include "ArmoredCar.h"
#include "Net/UnrealNetwork.h"

void AArmoredCar::OnRep_StashedAmmo() {
}

void AArmoredCar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArmoredCar, GunnerYawAndPitch);
    DOREPLIFETIME(AArmoredCar, StashedAmmoType);
    DOREPLIFETIME(AArmoredCar, StashedAmmo);
}

AArmoredCar::AArmoredCar() {
    this->StashedAmmo = 0;
}

