#include "CharacterAnimInstance.h"
#include "Components/AudioComponent.h"

class UAnimNotify;

float UCharacterAnimInstance::OnStartActivityState(const ECharacterActivityState NewActivityState) {
    return 0.0f;
}

float UCharacterAnimInstance::GetActivityStateDuration(const ECharacterActivityState InActivityState) const {
    return 0.0f;
}

void UCharacterAnimInstance::AnimNotify_FootFallR(const UAnimNotify* Notify) {
}

void UCharacterAnimInstance::AnimNotify_FootFallL(const UAnimNotify* Notify) {
}

UCharacterAnimInstance::UCharacterAnimInstance() {
    this->FootstepsAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("FootstepAudio"));
    this->Speed = 0.00f;
    this->AngularSpeedNative = 0.00f;
    this->LadderClimbSpeedNormalized = 0.00f;
    this->MovementDirection = 0.00f;
    this->bIsFalling = false;
    this->bIsScoping = false;
    this->bIsWorking = false;
    this->bIsLeftHandIK = false;
    this->bIsTrapped = false;
    this->bIsSwimming = false;
    this->bIsDrowning = false;
    this->AimOffsetYaw = 0.00f;
    this->AimOffsetPitch = 0.00f;
    this->PlayRateNative = 0.00f;
    this->CharacterStance = ESimCharacterStance::Standing;
    this->ActivityState = ECharacterActivityState::Idle;
    this->EquippedWeaponGripType = EEquippedWeaponGripType::None;
    this->StaggerAmount = 0.00f;
    this->CurrentFallingPose = 0;
    this->bStanceIsCrouched = false;
    this->bStanceIsProne = false;
    this->bIsCommander = false;
    this->bIsSitting = false;
    this->bIsZombie = false;
    this->ZombieType = EZombieType::None;
}

