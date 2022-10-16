#include "Freighter.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

void AFreighter::ServerUndeploy_Implementation() {
}
bool AFreighter::ServerUndeploy_Validate() {
    return true;
}

void AFreighter::ServerDeploy_Implementation() {
}
bool AFreighter::ServerDeploy_Validate() {
    return true;
}

void AFreighter::OnRep_State(const uint8 PreviousState) {
}

void AFreighter::OnRep_ShippableData() {
}

void AFreighter::OnRep_CurrentShippables() {
}

void AFreighter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFreighter, CurrentShippables);
    DOREPLIFETIME(AFreighter, ShippableData);
    DOREPLIFETIME(AFreighter, State);
}

AFreighter::AFreighter() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = NULL;
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->DeployedSFXTrigger = NULL;
    this->GlobalShippableInfo = NULL;
    this->MaxShippableCount = 5;
    this->State = 0;
    this->DynamicMeshComponent = NULL;
}

