#include "HalfTrack.h"
#include "Net/UnrealNetwork.h"

void AHalfTrack::OnRep_GunnerYawAndPitch() {
}

void AHalfTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHalfTrack, GunnerYawAndPitch);
    DOREPLIFETIME(AHalfTrack, StashedAmmoType);
}

AHalfTrack::AHalfTrack() {
    this->StashedAmmo = 0;
}

