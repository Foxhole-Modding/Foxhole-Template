#include "Fort.h"
#include "Components/BoxComponent.h"

AFort::AFort() {
    this->bSupportsEmplacedStructures = false;
    this->EmplacementLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("EmplacementLocation"));
    this->MinUpgradeTargetDistance = 0.00f;
}

