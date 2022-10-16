#include "Artillery.h"
#include "Net/UnrealNetwork.h"

void AArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArtillery, GunnerYawAndPitch);
}

AArtillery::AArtillery() {
    this->StashedAmmo = 0;
}

