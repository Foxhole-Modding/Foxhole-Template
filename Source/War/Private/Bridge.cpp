#include "Bridge.h"
#include "Components/BoxComponent.h"

ABridge::ABridge() {
    this->BelowBlockingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BelowBlockingVolume"));
    this->AboveBlockingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingArea"));
}

