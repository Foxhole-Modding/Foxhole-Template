#include "TownHall.h"
#include "MapIntelligenceSourceComponent.h"

ATownHall::ATownHall() {
    this->bIsFort = false;
    this->MapIntelligenceSourceComponent = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSource"));
}

