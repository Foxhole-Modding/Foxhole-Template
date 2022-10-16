#include "RPCBorderBaseClaimRequest.h"

FRPCBorderBaseClaimRequest::FRPCBorderBaseClaimRequest() {
    this->OriginMapID = EWorldConquestMapId::Invalid;
    this->RoadID = 0;
    this->ClaimingFaction = EFactionId::Colonials;
}

