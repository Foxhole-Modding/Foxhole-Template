#include "TransportTruck.h"
#include "Components/BoxComponent.h"

ATransportTruck::ATransportTruck() {
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
    this->StashedAmmo = 0;
}

