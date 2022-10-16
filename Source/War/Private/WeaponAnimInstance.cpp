#include "WeaponAnimInstance.h"

UWeaponAnimInstance::UWeaponAnimInstance() {
    this->CharacterActivityState = ECharacterActivityState::Idle;
    this->CharacterStance = ESimCharacterStance::Standing;
    this->CharacterSpeed = 0.00f;
    this->AimOffsetYaw = 0.00f;
    this->AimOffsetPitch = 0.00f;
    this->bIsCharacterScoping = false;
}

