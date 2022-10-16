#include "StickyBombExplosive.h"
#include "Net/UnrealNetwork.h"

void AStickyBombExplosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStickyBombExplosive, FuseTime);
}

AStickyBombExplosive::AStickyBombExplosive() {
    this->TotalFuseTime = 5.00f;
    this->FuseTime = 0.00f;
}

