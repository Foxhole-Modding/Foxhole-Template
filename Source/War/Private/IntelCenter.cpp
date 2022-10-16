#include "IntelCenter.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "OccupiableComponent.h"

void AIntelCenter::OnRep_LastListenEndTime(const float Previous) {
}

void AIntelCenter::OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch) {
}

void AIntelCenter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIntelCenter, PowerInfo);
    DOREPLIFETIME(AIntelCenter, RequiredSquadMembers);
    DOREPLIFETIME(AIntelCenter, SquadId);
    DOREPLIFETIME(AIntelCenter, GunnerYawAndPitch);
    DOREPLIFETIME(AIntelCenter, Power);
    DOREPLIFETIME(AIntelCenter, ConcreteSettler);
    DOREPLIFETIME(AIntelCenter, LastListenEndTime);
}

AIntelCenter::AIntelCenter() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->OccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("OccupiableComponent"));
    this->OccupiableTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("OccupiableTrigger"));
    this->RotationSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("RotationSFXLoop"));
    this->ListeningSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ListeningSFXLoop"));
    this->StartListeningSound = NULL;
    this->EndListeningSound = NULL;
    this->MaxPower = 100.00f;
    this->RequiredPowerForFiring = 10.00f;
    this->RequiredPowerForRotation = 1.00f;
    this->RequiredSquadMembers = 5;
    this->SquadId = 0;
    this->Power = 0.00f;
    this->LastListenEndTime = 0.00f;
    this->ListenTimeRemaining = 0.00f;
}

