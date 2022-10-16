#include "WarBeaconJoinRequestData.h"

FWarBeaconJoinRequestData::FWarBeaconJoinRequestData() {
    this->TeamId = 0;
    this->ServerTravelOrigin = EServerTravelOriginType::Client;
    this->bConsumeSelfServeFactionUnlock = false;
    this->QueueType = EQueueType::Regular;
    this->bSpawnAtOfflineCharacter = false;
}

