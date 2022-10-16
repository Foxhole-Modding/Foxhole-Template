#include "AmphibiousVehicle.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

AAmphibiousVehicle::AAmphibiousVehicle() {
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("WaterDriveLoop"));
}

