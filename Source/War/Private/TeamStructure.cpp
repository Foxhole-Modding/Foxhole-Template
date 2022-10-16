#include "TeamStructure.h"
#include "Net/UnrealNetwork.h"

void ATeamStructure::OnRep_TeamIdNotify() {
}

void ATeamStructure::BPSetTeamVisuals_Implementation(const int32 VisualTeamId) {
}

void ATeamStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamStructure, TeamId);
}

ATeamStructure::ATeamStructure() {
    this->TeamId = 255;
    this->bAllowUseByEnemy = false;
    this->bCanBeFlaggedForDisruptivePlacement = false;
    this->bCanDecayBePreventedBySupplyStation = false;
}

