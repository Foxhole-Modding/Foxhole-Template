#include "LongRangeArtillery.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "OccupiableComponent.h"

void ALongRangeArtillery::OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch) {
}

void ALongRangeArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALongRangeArtillery, PowerInfo);
    DOREPLIFETIME(ALongRangeArtillery, RequiredSquadMembers);
    DOREPLIFETIME(ALongRangeArtillery, SquadId);
    DOREPLIFETIME(ALongRangeArtillery, GunnerYawAndPitch);
    DOREPLIFETIME(ALongRangeArtillery, Power);
    DOREPLIFETIME(ALongRangeArtillery, ConcreteSettler);
}

ALongRangeArtillery::ALongRangeArtillery() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->OccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("OccupiableComponent"));
    this->OccupiableTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("OccupiableTrigger"));
    this->RotationSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("RotationSFXLoop"));
    this->FireShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireShellParticleSystem"));
    this->EjectShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EjectShellParticleSystem"));
    this->InitialDelay = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->MaxPower = 100.00f;
    this->RequiredPowerForFiring = 10.00f;
    this->RequiredPowerForRotation = 1.00f;
    this->RequiredSquadMembers = 5;
    this->SquadId = 0;
    this->Power = 0.00f;
    this->StashedAmmo = 0;
}

