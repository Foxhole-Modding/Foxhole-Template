#include "GrenadeAdapterComponent.h"
#include "Net/UnrealNetwork.h"

void UGrenadeAdapterComponent::ServerToggleFireMode_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UGrenadeAdapterComponent::ServerToggleFireMode_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UGrenadeAdapterComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UGrenadeAdapterComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UGrenadeAdapterComponent::ServerReleaseGrenade_Implementation(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UGrenadeAdapterComponent::ServerReleaseGrenade_Validate(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UGrenadeAdapterComponent::ServerBayonetAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UGrenadeAdapterComponent::ServerBayonetAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UGrenadeAdapterComponent::OnRep_IsGrenadeMode() {
}

void UGrenadeAdapterComponent::OnRep_IsBayonetMode() {
}

void UGrenadeAdapterComponent::OnRep_GrenadeMultiAmmo() {
}

void UGrenadeAdapterComponent::MulticastPlayFX_Implementation() {
}

void UGrenadeAdapterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrenadeAdapterComponent, GrenadeMultiAmmo);
    DOREPLIFETIME(UGrenadeAdapterComponent, bIsGrenadeMode);
    DOREPLIFETIME(UGrenadeAdapterComponent, bIsBayonetMode);
}

UGrenadeAdapterComponent::UGrenadeAdapterComponent() {
    this->GrenadeAdapterMesh = NULL;
    this->GrenadeFireSound = NULL;
    this->BayonetMesh = NULL;
    this->AttachAccessorySound = NULL;
    this->BayonetAttackSound = NULL;
    this->bIsGrenadeMode = false;
    this->bIsBayonetMode = false;
}

