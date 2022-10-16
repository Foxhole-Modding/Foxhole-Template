#include "GameServerProfile.h"

FGameServerProfile::FGameServerProfile() {
    this->TimeOfLastVoteKick = 0;
    this->MonthlyVoteKickCount = 0;
    this->DailyVoteKickCount = 0;
    this->RecentTeamKills = 0.00f;
    this->RecentFriendlyCharacterDamage = 0.00f;
    this->RecentFriendlyStructureDamage = 0.00f;
    this->RecentFriendlyVehicleDamage = 0.00f;
    this->RecentNameChanges = 0;
    this->RestrictedState = 0;
    this->RecentLoginCount = 0;
    this->Health = 0.00f;
    this->IsBleeding = false;
    this->PlayerFlags = 0;
    this->bIsGodMode = false;
    this->NumSelfServeFactionUnlocksUsed = 0;
    this->NormalizedStamina = 0.00f;
    this->OutfitType = EOutfitType::Invalid;
}

