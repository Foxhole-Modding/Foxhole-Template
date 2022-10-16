#include "HeavyMachineGunItemComponent.h"
#include "Net/UnrealNetwork.h"

void UHeavyMachineGunItemComponent::ServerStopInvoke_Implementation() {
}
bool UHeavyMachineGunItemComponent::ServerStopInvoke_Validate() {
    return true;
}

void UHeavyMachineGunItemComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UHeavyMachineGunItemComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UHeavyMachineGunItemComponent::OnRep_SimulatedHitNotify() {
}

void UHeavyMachineGunItemComponent::OnRep_IsEquipped() {
}

void UHeavyMachineGunItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHeavyMachineGunItemComponent, bIsEquipped);
    DOREPLIFETIME(UHeavyMachineGunItemComponent, SimulatedHitNotify);
}

UHeavyMachineGunItemComponent::UHeavyMachineGunItemComponent() {
    this->SkeletalMesh = NULL;
    this->FireCameraShake = NULL;
    this->ImpactEffect = NULL;
    this->WeaponFireFXClass = NULL;
    this->ShotSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->FiringRate = 0.25f;
    this->bSpawnFakeTracerFX = true;
    this->MitigationType = ECoverMitigationType::Default;
    this->bRequiresOpenVehiclePlatform = false;
    this->bCheckForOpenSpaceWhenFiring = false;
    this->bCanFireFromVehicle = false;
    this->bIsEquipped = false;
}

