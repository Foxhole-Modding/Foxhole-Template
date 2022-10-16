#include "GrenadeItemComponent.h"
#include "Net/UnrealNetwork.h"

void UGrenadeItemComponent::ServerThrowGrenade_Implementation(const FCharacterInvokeInfo WeaponInvokeInfo, FVector TossVelocity, FVector MouseCastStart, FVector MouseCastEnd) {
}
bool UGrenadeItemComponent::ServerThrowGrenade_Validate(const FCharacterInvokeInfo WeaponInvokeInfo, FVector TossVelocity, FVector MouseCastStart, FVector MouseCastEnd) {
    return true;
}

void UGrenadeItemComponent::ServerStartThrowingState_Implementation(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FVector TossVelocity, FActivityStateChange ActivityStateChange, FVector MouseCastStart, FVector MouseCastEnd) {
}
bool UGrenadeItemComponent::ServerStartThrowingState_Validate(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FVector TossVelocity, FActivityStateChange ActivityStateChange, FVector MouseCastStart, FVector MouseCastEnd) {
    return true;
}

void UGrenadeItemComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UGrenadeItemComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UGrenadeItemComponent::OnRep_IsEquipped() {
}

void UGrenadeItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrenadeItemComponent, bIsEquipped);
}

UGrenadeItemComponent::UGrenadeItemComponent() {
    this->PostTossDelay = 1.00f;
    this->AimLineThickness = 0.25f;
    this->bCanCook = true;
    this->PinPullSound = NULL;
    this->bIsEquipped = false;
}

