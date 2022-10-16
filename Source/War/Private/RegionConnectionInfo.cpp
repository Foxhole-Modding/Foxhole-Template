#include "RegionConnectionInfo.h"

FRegionConnectionInfo::FRegionConnectionInfo() {
    this->serverType = 0;
    this->Port = 0;
    this->PortBeacon = 0;
    this->packedWarStatus = 0;
    this->packedServerState = 0;
    this->colonialQueueSize = 0;
    this->wardenQueueSize = 0;
    this->ColonialOpenSlots = 0;
    this->WardenOpenSlots = 0;
}

