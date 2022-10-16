#include "FuelTank.h"

FFuelTank::FFuelTank() {
    this->RemainingFuel = 0.00f;
    this->FuelCapacity = 0.00f;
    this->bCanRefuelFromTanker = false;
    this->bCanSiphon = false;
}

