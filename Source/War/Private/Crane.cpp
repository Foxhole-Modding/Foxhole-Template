#include "Crane.h"
#include "Components/StaticMeshComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "CraneComponent.h"

ACrane::ACrane() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->ShippableCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ShippableCollision"));
    this->ArmMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmMovementSFXLoop"));
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->PulleyMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("PulleyMovementSFXLoop"));
    this->CraneComponent = CreateDefaultSubobject<UCraneComponent>(TEXT("CraneComponent"));
}

