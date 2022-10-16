#include "MultiLauncherVehicle.h"
#include "Net/UnrealNetwork.h"

void AMultiLauncherVehicle::OnRep_StashedAmmo() {
}

void AMultiLauncherVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMultiLauncherVehicle, GunnerYawAndPitch);
    DOREPLIFETIME(AMultiLauncherVehicle, StashedAmmo);
    DOREPLIFETIME(AMultiLauncherVehicle, StashedAmmoType);
}

AMultiLauncherVehicle::AMultiLauncherVehicle() {
    this->StashedAmmo = 0;
    this->bRequiresPassengerToMove = false;
}

