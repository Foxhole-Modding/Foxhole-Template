#include "PlayerWarState.h"

FPlayerWarState::FPlayerWarState() {
    this->LastTeamId = 0;
    this->TimePlayedTeam0 = 0.00f;
    this->TimePlayedTeam1 = 0.00f;
    this->ZombieType = EZombieType::None;
    this->NumUnstuckCommandsUsed = 0;
    this->TimeInConquest = 0.00f;
}

