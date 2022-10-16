#include "FlamethrowerWeaponComponent.h"
#include "Net/UnrealNetwork.h"

void UFlamethrowerWeaponComponent::OnRep_FlameStreamFXParam() {
}

void UFlamethrowerWeaponComponent::OnRep_FlameImpactFXInfo() {
}

void UFlamethrowerWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlamethrowerWeaponComponent, FlameStreamFXParam);
    DOREPLIFETIME(UFlamethrowerWeaponComponent, FlameImpactFXInfo);
}

UFlamethrowerWeaponComponent::UFlamethrowerWeaponComponent() {
    this->FlameStreamFX = NULL;
    this->FlameBurstFX = NULL;
    this->FlameIdleFX = NULL;
    this->AttachedFlameComponent = NULL;
    this->ImpactBurstFXComponent = NULL;
    this->IdleFlameFXComponent = NULL;
    this->FlameSpeedPredictionFactor = 3000.00f;
    this->FlameStreamFXParam = 0.00f;
    this->CachedAmmoPickupCDO = NULL;
}

