#include "MapBoundary.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

AMapBoundary::AMapBoundary() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("BoundaryArrow"));
    this->MarkerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundaryArea"));
    this->NoBuildArea = CreateDefaultSubobject<UBoxComponent>(TEXT("NoBuildArea"));
}

