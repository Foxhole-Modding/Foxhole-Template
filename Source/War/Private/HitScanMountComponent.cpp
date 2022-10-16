#include "HitScanMountComponent.h"
#include "Net/UnrealNetwork.h"

void UHitScanMountComponent::ServerStopInvoke_Implementation() {
}
bool UHitScanMountComponent::ServerStopInvoke_Validate() {
    return true;
}

void UHitScanMountComponent::ServerStartInvoke_Implementation(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UHitScanMountComponent::ServerStartInvoke_Validate(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UHitScanMountComponent::OnRep_SimulatedHitNotify() {
}

void UHitScanMountComponent::MulticastSpawnTracerFX_Implementation() {
}

void UHitScanMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitScanMountComponent, SimulatedHitNotify);
    DOREPLIFETIME(UHitScanMountComponent, Ammo);
}

UHitScanMountComponent::UHitScanMountComponent() {
    this->FiringRate = 0.25f;
    this->bIsAutomaticFire = true;
    this->bSpawnExtraTracers = true;
    this->bUsePerBarrelFX = true;
    this->ImpactEffect = NULL;
    this->WeaponFireFXClass = NULL;
    this->ExplosionClass = NULL;
    this->ShotSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->ReloadSoundCue = NULL;
    this->Ammo = 0;
}

