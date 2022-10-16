#include "RPCRocketLaunchCodeRequest.h"

FRPCRocketLaunchCodeRequest::FRPCRocketLaunchCodeRequest() {
    this->Origin = EWorldConquestMapId::Invalid;
    this->FactionId = EFactionId::Colonials;
    this->LaunchCodeID = 0;
}

