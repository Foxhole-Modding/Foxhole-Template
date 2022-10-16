#include "EncumbranceModifiers.h"

FEncumbranceModifiers::FEncumbranceModifiers() {
    this->BaselineEnc = 0;
    this->MaxEnc = 0;
    this->ZeroEncTurnRateMod = 0.00f;
    this->ZeroEncMoveSpeedMod = 0.00f;
    this->MaxEncTurnRateMod = 0.00f;
    this->MaxEncWalkingSpeedMod = 0.00f;
    this->OverEncWalkingSpeedMod = 0.00f;
    this->OverEncTurnRateMod = 0.00f;
    this->OverEncMaxStaminaDrainRateMod = 0.00f;
    this->CurrentMaxSpeedModifier = 0.00f;
    this->CurrentTurnModifier = 0.00f;
    this->CurrentStaminaDrainModifier = 0.00f;
}

