#include "PlayerBan.h"

FPlayerBan::FPlayerBan() {
    this->ID = 0;
    this->BanLiftTimeUnix = 0;
    this->BanReason = EBanReason::CommsMisuse;
    this->VoteKickCount = 0;
    this->LastVoteKickTime = 0;
    this->BanCount = 0;
    this->BanCountClearTime = 0;
}

