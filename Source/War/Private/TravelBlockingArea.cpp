#include "TravelBlockingArea.h"
#include "Components/BoxComponent.h"

ATravelBlockingArea::ATravelBlockingArea() {
    this->TravelBlockingComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TravelBlockingComponent"));
}

