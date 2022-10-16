#include "HitScanWeaponComponent.h"
#include "Net/UnrealNetwork.h"

void UHitScanWeaponComponent::ServerStartInvoke_Implementation(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UHitScanWeaponComponent::ServerStartInvoke_Validate(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UHitScanWeaponComponent::OnRep_SimulatedHitNotify() {
}

void UHitScanWeaponComponent::OnRep_IsEquipped() {
}

void UHitScanWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitScanWeaponComponent, bIsEquipped);
    DOREPLIFETIME(UHitScanWeaponComponent, SimulatedHitNotify);
}

UHitScanWeaponComponent::UHitScanWeaponComponent() {
    this->FireCameraShake = NULL;
    this->ImpactEffect = NULL;
    this->WeaponFireFXClass = NULL;
    this->ShotSoundCue = NULL;
    this->ShotNoAmmoSoundCue = NULL;
    this->ClipEmptiedSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->SkeletalMesh = NULL;
    this->TotalShotsFired = 1;
    this->BurstFiringRate = 0.00f;
    this->MitigationType = ECoverMitigationType::Default;
    this->bCanFireFromVehicle = false;
    this->bIsEquipped = false;
}

