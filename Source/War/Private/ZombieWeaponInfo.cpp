#include "ZombieWeaponInfo.h"

FZombieWeaponInfo::FZombieWeaponInfo() {
    this->Type = EZombieType::None;
    this->Icon = NULL;
    this->MeleeDamageType = NULL;
    this->SecondaryAttack = EZombieSecondaryAttack::None;
    this->ActivityState = ECharacterActivityState::Idle;
    this->Cooldown = 0.00f;
}

