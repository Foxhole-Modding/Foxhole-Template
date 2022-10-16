#include "VehicleBuildSite.h"
#include "Net/UnrealNetwork.h"

void AVehicleBuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehicleBuildSite, VehicleCodeName);
}

AVehicleBuildSite::AVehicleBuildSite() {
}

