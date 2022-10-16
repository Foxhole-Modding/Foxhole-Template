#include "NoBuildArea.h"
#include "Components/BoxComponent.h"

ANoBuildArea::ANoBuildArea() {
    this->NoBuildComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("NoBuildComponent"));
    this->PlacementStatus = EPlacementStatus::IsObstructed;
}

