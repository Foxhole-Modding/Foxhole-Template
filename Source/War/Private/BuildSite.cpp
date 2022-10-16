#include "BuildSite.h"
#include "Net/UnrealNetwork.h"

void ABuildSite::OnRep_ResourceRequirements() {
}

void ABuildSite::OnRep_DefaultResourceRequirements() {
}

void ABuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildSite, DefaultResourceRequirements);
    DOREPLIFETIME(ABuildSite, ResourceRequirements);
    DOREPLIFETIME(ABuildSite, TeamId);
    DOREPLIFETIME(ABuildSite, ResourcesPerBuildCycle);
    DOREPLIFETIME(ABuildSite, bRequiresVehicleToBuild);
    DOREPLIFETIME(ABuildSite, bRequiresShovelToBuild);
    DOREPLIFETIME(ABuildSite, bIsBuiltAutomatically);
}

ABuildSite::ABuildSite() {
    this->BlocksPassiveDefences = false;
    this->bIgnoreStructureDeathAoE = false;
    this->bAllowStanding = true;
    this->bIsNeutral = false;
    this->TeamId = 0;
    this->ResourcesPerBuildCycle = 1;
    this->bRequiresVehicleToBuild = false;
    this->bRequiresShovelToBuild = false;
    this->bIsBuiltAutomatically = false;
    this->bIsReservableWhenBuiltAutomatically = false;
    this->Tier = ETechTreeTier::One;
    this->RemainingExpiryTime = 0.00f;
}

