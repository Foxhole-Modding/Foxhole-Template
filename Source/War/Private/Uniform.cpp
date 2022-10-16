#include "Uniform.h"

FUniform::FUniform() {
    this->ItemHolderCapacity = 0;
    this->StackFilter = 0;
    this->StackSize = 0;
    this->EncumbranceFilter = 0;
    this->EncumbranceModifier = 0.00f;
    this->DetectionChance = 0.00f;
    this->SnowStormMitigation = 0.00f;
    this->RainStormMitigation = 0.00f;
    this->BleedChanceModifier = 0.00f;
    this->bAllowRegimentFriendlyFire = false;
}

