#include "FirePit.h"
#include "Net/UnrealNetwork.h"
#include "TemperatureModifierSphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

void AFirePit::OnRep_FuelTankDiesel() {
}

void AFirePit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFirePit, FuelTankDiesel);
}

AFirePit::AFirePit() {
    this->TemperatureModifierComponent = CreateDefaultSubobject<UTemperatureModifierSphereComponent>(TEXT("TemperatureModifierComponent"));
    this->FireMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FireMesh"));
    this->Fire1ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire1ParticleSystem"));
    this->Fire2ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire2ParticleSystem"));
    this->Fire3ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire3ParticleSystem"));
    this->FireSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("FireSFXLoop"));
    this->DieselConsumptionRate = 0.00f;
}

