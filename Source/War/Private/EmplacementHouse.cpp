#include "EmplacementHouse.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "OccupiableComponent.h"

void AEmplacementHouse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmplacementHouse, GunnerYawAndPitch);
}

AEmplacementHouse::AEmplacementHouse() {
    this->EmplacementGunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EmplacementGunMesh"));
    this->EmplacementGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("EmplacementGunMuzzleLocation"));
    this->OccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("OccupiableComponent"));
    this->LadderType = NULL;
    this->LadderLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation"));
    this->TimeToStarvation = 0.00f;
    this->AnimationHysteresisTime = 0.00f;
    this->StashedAmmo = 0;
    this->Ladder = NULL;
}

