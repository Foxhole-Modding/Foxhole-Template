#include "MountComponent.h"
#include "Net/UnrealNetwork.h"

void UMountComponent::OnRep_IsEquipped() {
}

void UMountComponent::ClientSyncAmmo_Implementation(int32 CurrentAmmo) {
}

void UMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMountComponent, bIsEquipped);
}

UMountComponent::UMountComponent() {
    this->Icon = NULL;
    this->EquippedGripType = EEquippedWeaponGripType::None;
    this->bIsAmmoStackable = true;
    this->bMustBeStoppedToInvoke = false;
    this->bUseCharacterRotationForAim = false;
    this->bIsStationary = false;
    this->bUpdateCharacterRotation = true;
    this->LinkedVehicleSubsystem = EVehicleSubsystem::None;
    this->CachedAmmoPickupCDO = NULL;
    this->bIsDeployedGunner = false;
    this->bIsEquipped = true;
}

