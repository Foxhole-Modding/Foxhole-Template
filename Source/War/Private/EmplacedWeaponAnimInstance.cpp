#include "EmplacedWeaponAnimInstance.h"

class UAnimNotify;

void UEmplacedWeaponAnimInstance::OnFiringComplete() {
}

void UEmplacedWeaponAnimInstance::AnimNotify_OnFiringComplete(const UAnimNotify* Notify) {
}

UEmplacedWeaponAnimInstance::UEmplacedWeaponAnimInstance() {
    this->Yaw = 0.00f;
    this->Pitch = 0.00f;
    this->bIsCranking = false;
    this->bIsShooting = false;
}

