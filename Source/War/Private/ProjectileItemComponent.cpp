#include "ProjectileItemComponent.h"

void UProjectileItemComponent::ServerStartInvoke_Implementation(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UProjectileItemComponent::ServerStartInvoke_Validate(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UProjectileItemComponent::AllSpawnFiringEffects_Implementation() {
}

UProjectileItemComponent::UProjectileItemComponent() {
    this->SkeletalMesh = NULL;
    this->PayloadMesh = NULL;
    this->MuzzleFlashPS = NULL;
    this->BackMuzzleFlashPS = NULL;
    this->ShotSoundCue = NULL;
    this->FiringMode = EProjectileFiringMode::Default;
    this->SuggestedVelocitySpeed = 0.00f;
    this->FallbackAngle = 30.00f;
    this->MinDistance = 300.00f;
    this->bIsSingleUse = false;
}

