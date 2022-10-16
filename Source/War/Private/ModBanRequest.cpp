#include "ModBanRequest.h"

FModBanRequest::FModBanRequest() {
    this->TargetPlayerTeamId = 0;
    this->BanDurationSec = 0;
    this->BanReason = EBanReason::CommsMisuse;
}

