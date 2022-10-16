#include "StaticCrane.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "FacilityLightComponent.h"
#include "OccupiableComponent.h"
#include "BuildSocketComponent.h"
#include "CraneComponent.h"

void AStaticCrane::OnRep_PowerGridInfo() {
}

void AStaticCrane::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStaticCrane, PowerGridInfo);
}

AStaticCrane::AStaticCrane() {
    this->MainMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CraneMesh"));
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->ShippableCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ShippableCollision"));
    this->ArmMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmMovementSFXLoop"));
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->PulleyMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("PulleyMovementSFXLoop"));
    this->OccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("CraneOccupiableComponent"));
    this->OccupiableComponentTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("CraneOccupiableComponentTrigger"));
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->CraneComponent = CreateDefaultSubobject<UCraneComponent>(TEXT("CraneComponent"));
}

