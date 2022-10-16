#include "FortBuildSite.h"
#include "Net/UnrealNetwork.h"

void AFortBuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortBuildSite, bCanPassThroughPower);
}

AFortBuildSite::AFortBuildSite() {
    this->bCanPassThroughPower = false;
}

