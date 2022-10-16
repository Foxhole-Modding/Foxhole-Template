#include "RPCRocketPreLaunchAlert.h"

FRPCRocketPreLaunchAlert::FRPCRocketPreLaunchAlert() {
    this->Origin = EWorldConquestMapId::Invalid;
    this->LaunchCodeID = 0;
    this->FactionId = EFactionId::Colonials;
    this->MapId = EWorldConquestMapId::Invalid;
}

