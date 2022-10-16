#include "GarrisonHouse.h"
#include "AITurretsControllerComponent.h"

bool AGarrisonHouse::IsNeutralHouse() const {
    return false;
}

AGarrisonHouse::AGarrisonHouse() {
    this->TimeToStarvation = 600.00f;
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
}

