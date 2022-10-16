#include "MapItem.h"

FMapItem::FMapItem() {
    this->ObjectIndex = 0;
    this->ObjectSerialNumber = 0;
    this->TeamId = EMapTeamId::Colonial;
    this->ListeningTeamID = EMapTeamId::Colonial;
    this->IconType = EMapIconType::None;
    this->Flags = 0;
}

