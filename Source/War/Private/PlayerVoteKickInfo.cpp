#include "PlayerVoteKickInfo.h"

FPlayerVoteKickInfo::FPlayerVoteKickInfo() {
    this->RegimentID = 0;
    this->TeamId = 0;
    this->VoteKickCategory = EUserVoteKickCategory::TeamKilling;
    this->RecentTeamKills = 0.00f;
    this->RecentFriendlyCharacterDamage = 0.00f;
    this->RecentFriendlyStructureDamage = 0.00f;
    this->RecentFriendlyVehicleDamage = 0.00f;
    this->RecentNameChanges = 0;
}

