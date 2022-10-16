#include "RPCRocketLaunchCodeResponse.h"

FRPCRocketLaunchCodeResponse::FRPCRocketLaunchCodeResponse() {
    this->Origin = EWorldConquestMapId::Invalid;
    this->LaunchCodeID = 0;
    this->bHasStrikeLocation = false;
}

