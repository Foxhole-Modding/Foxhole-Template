#include "ItemStash.h"
#include "Components/BoxComponent.h"

AItemStash::AItemStash() {
    this->DecayTime = 600.00f;
    this->DespawnIfEmptyTime = 30.00f;
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
}

