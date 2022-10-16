#include "EmplacedWeapon.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "OccupiableComponent.h"

void AEmplacedWeapon::OnRep_StashedAmmo() {
}

void AEmplacedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmplacedWeapon, GunnerYawAndPitch);
    DOREPLIFETIME(AEmplacedWeapon, StashedAmmo);
}

AEmplacedWeapon::AEmplacedWeapon() {
    this->EmplacedTrackingModifier = 0.00f;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->FoundationMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FoundationMesh"));
    this->OccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("OccupiableComponent"));
    this->StashedAmmo = 0;
}

