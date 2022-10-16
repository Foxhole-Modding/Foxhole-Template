#include "ServerTravelClientState.h"

FServerTravelClientState::FServerTravelClientState() {
    this->Status = EServerTravelStatusOnClient::Invalid;
    this->OriginType = EServerTravelOriginType::Client;
    this->OriginServerType = EWarServerType::Skirmish;
    this->bIsBorderTravel = false;
}

