#include "Motorboat.h"
#include "Particles/ParticleSystemComponent.h"

AMotorboat::AMotorboat() {
    this->FrontWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontWaterEmitter"));
    this->BackWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackWaterEmitter"));
}

