#include "Barge.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

void ABarge::ServerToggleRamp_Implementation(const bool bIsLanding) {
}
bool ABarge::ServerToggleRamp_Validate(const bool bIsLanding) {
    return true;
}

void ABarge::OnRep_ShippableData() {
}

void ABarge::OnRep_DockedState() {
}

void ABarge::OnRep_CurrentShippable() {
}

void ABarge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABarge, DockedState);
    DOREPLIFETIME(ABarge, RampAngle);
    DOREPLIFETIME(ABarge, CurrentShippable);
    DOREPLIFETIME(ABarge, ShippableData);
}

ABarge::ABarge() {
    this->RampDriveVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("RampDriveVolume"));
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("WaterDriveLoop"));
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
    this->DockedState = Docked;
    this->RampAngle = -6.50f;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->GlobalShippableInfo = NULL;
}

