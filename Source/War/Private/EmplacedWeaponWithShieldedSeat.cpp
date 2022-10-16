#include "EmplacedWeaponWithShieldedSeat.h"
#include "OccupiableComponent.h"
#include "Components/BoxComponent.h"

AEmplacedWeaponWithShieldedSeat::AEmplacedWeaponWithShieldedSeat() {
    this->ShieldedMountComponent = NULL;
    this->ShieldedOccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("ShieldedOccupiableComponent"));
    this->GunnerTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("GunnerTrigger"));
    this->ShieldedTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ShieldedTrigger"));
}

