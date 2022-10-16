#include "MapIntelligenceItem.h"

FMapIntelligenceItem::FMapIntelligenceItem() {
    this->TeamId = 0;
    this->Type = EMapIntelligenceType::None;
    this->TimeRemaining = 0.00f;
    this->bStructureWasAttackedRecently = false;
    this->ListeningTeamID = 0;
}

