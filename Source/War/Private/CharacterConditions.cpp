#include "CharacterConditions.h"

FCharacterConditions::FCharacterConditions() {
    this->GripType = EEquippedWeaponGripType::None;
    this->WeatherType = EWeatherType::None;
    this->MaxVelocity = 0.00f;
    this->TriggerChance = 0.00f;
    this->bRequiresGripType = false;
    this->bRequiresWeather = false;
    this->bRequiresWarming = false;
}

