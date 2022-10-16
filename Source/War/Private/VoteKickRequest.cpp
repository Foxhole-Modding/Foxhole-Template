#include "VoteKickRequest.h"

FVoteKickRequest::FVoteKickRequest() {
    this->TeamId = 0;
    this->RecentTeamKills = 0.00f;
    this->RecentFriendlyCharacterDamage = 0.00f;
    this->RecentFriendlyStructureDamage = 0.00f;
    this->RecentFriendlyVehicleDamage = 0.00f;
    this->RecentNameChanges = 0;
}

