#include "ClaimStatus.h"

FClaimStatus::FClaimStatus() {
    this->bIsEnabled = false;
    this->bCanBeDemolished = false;
    this->bCanBuildSiteBeDemolished = false;
    this->FactionId = EFactionId::Colonials;
    this->SquadId = 0;
    this->ClaimTime = 0;
    this->OriginalBuildTime = 0;
    this->DemolishDurationHours = 0;
}

