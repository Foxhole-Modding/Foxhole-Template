#include "PlayerRequestData.h"

FPlayerRequestData::FPlayerRequestData() {
    this->FactionId = EFactionId::Colonials;
    this->RegionId = EWorldConquestMapId::Invalid;
    this->Extras = 0;
}

