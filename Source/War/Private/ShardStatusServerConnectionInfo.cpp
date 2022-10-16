#include "ShardStatusServerConnectionInfo.h"

FShardStatusServerConnectionInfo::FShardStatusServerConnectionInfo() {
    this->Port = 0;
    this->BeaconPort = 0;
    this->packedWarStatus = 0;
    this->packedServerState = 0;
    this->colonialQueueSize = 0;
    this->wardenQueueSize = 0;
    this->serverType = 0;
    this->openColonialSlots = 0;
    this->openWardenSlots = 0;
}

