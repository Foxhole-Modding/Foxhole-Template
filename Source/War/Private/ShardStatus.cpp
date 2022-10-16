#include "ShardStatus.h"

FShardStatus::FShardStatus() {
    this->bShowColonialQueueWarning = false;
    this->bShowWardenQueueWarning = false;
    this->NormalizedGlobalPopulation = 0.00f;
    this->SquadMaxSize = 0;
    this->SecondsToPreConquest = 0;
    this->bIsPreConquest = false;
    this->bIsVIPMode = false;
}

