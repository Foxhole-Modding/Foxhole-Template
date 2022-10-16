#include "BorderTravelGhost.h"
#include "Components/BoxComponent.h"

ABorderTravelGhost::ABorderTravelGhost() {
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
}

