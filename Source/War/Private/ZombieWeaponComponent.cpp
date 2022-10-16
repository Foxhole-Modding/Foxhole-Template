#include "ZombieWeaponComponent.h"
#include "Net/UnrealNetwork.h"

void UZombieWeaponComponent::ServerInvokeRangedAttack_Implementation(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UZombieWeaponComponent::ServerInvokeRangedAttack_Validate(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UZombieWeaponComponent::ServerInvokePrimaryAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UZombieWeaponComponent::ServerInvokePrimaryAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UZombieWeaponComponent::ServerInvokeFrontalAOEAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UZombieWeaponComponent::ServerInvokeFrontalAOEAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UZombieWeaponComponent::OnRep_IsEquipped() {
}

void UZombieWeaponComponent::MulticastRangedAttackTriggered_Implementation() {
}

void UZombieWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UZombieWeaponComponent, bIsEquipped);
}

UZombieWeaponComponent::UZombieWeaponComponent() {
    this->MeleeDamageDelay = 0.15f;
    this->MeleeDamageDelaySecond = 0.50f;
    this->ProjectileClass = NULL;
    this->ProjectileDelay = 0.25f;
    this->ProjectileSpeed = 0.00f;
    this->ProjectileSoundCue = NULL;
    this->ProjectilePS = NULL;
    this->SmashExplosionEffect = NULL;
    this->SmashDamageDelay = 0.95f;
    this->SmashBaseDamage = 0.00f;
    this->SmashRadius = 0.00f;
    this->bIsEquipped = false;
}

