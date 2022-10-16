#include "PlayerProfile.h"

UPlayerProfile::UPlayerProfile() {
    this->XP = 0;
    this->CP = 0;
    this->CPToGive = 0;
    this->XPForCP = 0;
    this->Level = 1;
    this->OffenseCount = 0;
    this->TimeOfLastVoteKick = 0;
    this->MonthlyVoteKickCount = 0;
    this->DailyVoteKickCount = 0;
    this->RecentTeamKills = 0.00f;
    this->RecentFriendlyCharacterDamage = 0.00f;
    this->RecentFriendlyStructureDamage = 0.00f;
    this->RecentFriendlyVehicleDamage = 0.00f;
    this->RecentNameChanges = 0;
    this->RestrictedState = ERestrictedState::None;
    this->RestrictionClearTimes.AddDefaulted(5);
    this->RecentLoginCount = 0;
    this->Health = 0.00f;
    this->IsBleeding = false;
    this->PlayerMode = 0;
    this->bIsGodMode = false;
    this->NumSelfServeFactionUnlocksUsed = 0;
    this->NormalizedStamina = 1.00f;
    this->OutfitType = EOutfitType::Default;
}

