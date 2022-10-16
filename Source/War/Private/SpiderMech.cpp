#include "SpiderMech.h"
#include "Net/UnrealNetwork.h"

void ASpiderMech::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpiderMech, GunnerYaw);
    DOREPLIFETIME(ASpiderMech, AltGunnerYawAndPitch);
}

ASpiderMech::ASpiderMech() {
    this->PackagedMesh = NULL;
    this->GunnerYaw = 0.00f;
    this->StashedAmmo = 0;
    this->AltStashedAmmo = 0;
}

