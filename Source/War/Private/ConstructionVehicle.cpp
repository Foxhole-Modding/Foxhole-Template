#include "ConstructionVehicle.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

void AConstructionVehicle::ServerSyncDesiredYaw_Implementation(const float DesiredYaw) {
}
bool AConstructionVehicle::ServerSyncDesiredYaw_Validate(const float DesiredYaw) {
    return true;
}

void AConstructionVehicle::ServerSetIsWorking_Implementation(const bool NewBIsWorking) {
}
bool AConstructionVehicle::ServerSetIsWorking_Validate(const bool NewBIsWorking) {
    return true;
}

void AConstructionVehicle::ServerSetIsScoping_Implementation(const bool bIsScoping) {
}
bool AConstructionVehicle::ServerSetIsScoping_Validate(const bool bIsScoping) {
    return true;
}

void AConstructionVehicle::MulticastPlayFX_Implementation() {
}

void AConstructionVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConstructionVehicle, CabYaw);
    DOREPLIFETIME(AConstructionVehicle, bIsWorking);
}

AConstructionVehicle::AConstructionVehicle() {
    this->BoomLocation = CreateDefaultSubobject<USceneComponent>(TEXT("BoomLocationLocation"));
    this->HammerLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HammerLocation"));
    this->WorkSoundCue = NULL;
    this->WorkPS = NULL;
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
    this->CabYaw = 0.00f;
    this->bIsWorking = false;
}

