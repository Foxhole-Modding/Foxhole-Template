#include "EngineRailVehicle.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"

class UPrimitiveComponent;
class AActor;

void AEngineRailVehicle::TrainRammingCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEngineRailVehicle::ServerSetHornActivated_Implementation(bool InHornActivated) {
}
bool AEngineRailVehicle::ServerSetHornActivated_Validate(bool InHornActivated) {
    return true;
}

void AEngineRailVehicle::OnRep_HornActivated() {
}

void AEngineRailVehicle::ClientSetBoosting_Implementation(bool InBoosting) {
}

void AEngineRailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEngineRailVehicle, bHornActivated);
}

AEngineRailVehicle::AEngineRailVehicle() {
    this->SteamGainRate = 1.00f;
    this->SteamVentRate = 1.00f;
    this->SteamActivateThreshold = 0.20f;
    this->SteamDeactivateThreshold = 0.00f;
    this->SteamPressure = 0.00f;
    this->bIsSteamSFXPrimed = false;
    this->SteamParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SteamParticleSystem"));
    this->BoostingParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoostingParticleSystem"));
    this->SteamVentCue = NULL;
    this->HornLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("HornLoop"));
    this->TrainRammingCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TrainRammingCollisionBox"));
    this->MaxHornDuration = 4.00f;
    this->BoostDuration = 5.00f;
    this->bHornActivated = false;
    this->VehicleRetrieveModifier = 1.00f;
    this->bDoesTrainRamming = false;
    this->TrainRammingSpeedSqrThreshold = 500.00f;
}

