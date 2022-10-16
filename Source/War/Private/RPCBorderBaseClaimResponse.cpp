#include "RPCBorderBaseClaimResponse.h"

FRPCBorderBaseClaimResponse::FRPCBorderBaseClaimResponse() {
    this->ClaimingFaction = EFactionId::Colonials;
    this->Response = 0;
    this->bIsUsable = false;
    this->bAllowClaimOverride = false;
}

