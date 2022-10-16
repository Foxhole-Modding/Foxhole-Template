#include "Gunboat.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"

void AGunboat::SetIsArtilleryFiring(bool IsBowFiring) {
}

bool AGunboat::IsMachineGunFiring() const {
    return false;
}

bool AGunboat::IsArtilleryRotating() const {
    return false;
}

bool AGunboat::IsArtilleryFiring() const {
    return false;
}

float AGunboat::GetMachineGunYaw() const {
    return 0.0f;
}

float AGunboat::GetMachineGunPitch() const {
    return 0.0f;
}

float AGunboat::GetArtilleryYaw() const {
    return 0.0f;
}

float AGunboat::GetArtilleryPitch() const {
    return 0.0f;
}

void AGunboat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGunboat, ArtilleryGunYaw);
    DOREPLIFETIME(AGunboat, ArtilleryGunPitch);
    DOREPLIFETIME(AGunboat, MachineGunYaw);
    DOREPLIFETIME(AGunboat, MachineGunPitch);
}

AGunboat::AGunboat() {
    this->MachineGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MachineGunMuzzle"));
    this->ArtilleryMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ArtilleryMuzzle"));
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->FrontWakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontWakeWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->ArtilleryGunYaw = 180.00f;
    this->ArtilleryGunPitch = 23.00f;
    this->MachineGunYaw = 0.00f;
    this->MachineGunPitch = 0.00f;
    this->StashedArtilleryAmmo = 0;
    this->StashedMachineGunAmmo = 0;
}

