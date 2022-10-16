#include "TroopShip.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "GenericItemStockpileComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ATroopShip::ServerToggleDeployment_Implementation() {
}
bool ATroopShip::ServerToggleDeployment_Validate() {
    return true;
}

void ATroopShip::OnRep_DeploymentState() {
}

void ATroopShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATroopShip, DeploymentState);
    DOREPLIFETIME(ATroopShip, RampAngle);
}

ATroopShip::ATroopShip() {
    this->RampExitPosition = CreateDefaultSubobject<USceneComponent>(TEXT("RampExitPosition"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = NULL;
    this->DeploymentState = Idle;
    this->RampAngle = 0.00f;
}

