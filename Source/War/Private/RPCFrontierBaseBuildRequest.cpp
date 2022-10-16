#include "RPCFrontierBaseBuildRequest.h"

FRPCFrontierBaseBuildRequest::FRPCFrontierBaseBuildRequest() {
    this->OriginMapID = EWorldConquestMapId::Invalid;
    this->TargetMapId = EWorldConquestMapId::Invalid;
    this->BuilderFactionId = EFactionId::Colonials;
}

