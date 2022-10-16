#include "DeployedWeapon.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

void ADeployedWeapon::OnRep_StashedAmmo() {
}

void ADeployedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADeployedWeapon, StashedAmmo);
    DOREPLIFETIME(ADeployedWeapon, TripodHeight);
}

ADeployedWeapon::ADeployedWeapon() {
    this->PayloadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PayloadMesh"));
    this->StashedAmmo = 0;
    this->TripodHeight = 100.00f;
}

