#include "Rocket.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ARocket::OnRep_State() {
}

void ARocket::OnRep_Fuel() {
}

void ARocket::OnRep_ExpiryTime() {
}


void ARocket::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARocket, State);
    DOREPLIFETIME(ARocket, Fuel);
    DOREPLIFETIME(ARocket, SelectedStrikeLocation);
    DOREPLIFETIME(ARocket, ExpiryTime);
}

ARocket::ARocket() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Rocket Mesh"));
    this->FuelingParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fueling Particle System"));
    this->GroundParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ground Particle System"));
    this->LaunchParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Launch Particle System"));
    this->InFlightParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("In Flight Particle System"));
    this->LaunchSoundCue = NULL;
    this->ImpactSoundCue = NULL;
    this->InFlightCameraShake = NULL;
    this->LaunchAnimationTime = 8.00f;
    this->FlightAnimationTime = 6.00f;
    this->FuelRequiredForLocalLaunch = 1;
    this->FuelRequiredForGlobalLaunch = 1;
    this->LaunchAudioComponent = NULL;
    this->State = ERocketLaunchSequence::Idle;
    this->InitiatingFaction = EFactionId::NoTeam;
    this->Fuel = 0;
    this->ExpiryTime = 0.00f;
    this->ExpiryTimeTicks = 0;
}

