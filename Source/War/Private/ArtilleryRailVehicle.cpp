#include "ArtilleryRailVehicle.h"
#include "Particles/ParticleSystemComponent.h"

AArtilleryRailVehicle::AArtilleryRailVehicle() {
    this->FireShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireShellParticleSystem"));
    this->EjectShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EjectShellParticleSystem"));
    this->InitialDelay = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->FuelPowerForRotation = 1.00f;
    this->FuelPowerForFiring = 5.00f;
}

