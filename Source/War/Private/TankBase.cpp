#include "TankBase.h"
#include "Particles/ParticleSystemComponent.h"

ATankBase::ATankBase() {
    this->DisabledTurretFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurretFX"));
    this->DisabledTurret2FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurret2FX"));
    this->DisabledTurret3FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurret3FX"));
    this->DisabledFuelTankFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledFuelTankFX"));
}

