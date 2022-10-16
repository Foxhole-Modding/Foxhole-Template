#include "WarShardInfo.h"

FWarShardInfo::FWarShardInfo() {
    this->ShardId = 0;
    this->bEnabled = false;
    this->bEnableJoinEventsColonial = false;
    this->bEnableJoinEventsWarden = false;
    this->bEnableZombieButton = false;
    this->ColonialQueueWarning = EQueueWarningState::Auto;
    this->WardenQueueWarning = EQueueWarningState::Auto;
    this->TravelMapMinimumOpenSlots = 0;
    this->EnableJoinEventsQueueThreshold = 0;
    this->UprisingChanceType = EUprisingChanceType::None;
    this->NormalizedGlobalPopulation = 0.00f;
}

