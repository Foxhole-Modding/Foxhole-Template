#include "ViolationEvent.h"

FViolationEvent::FViolationEvent() {
    this->Timestamp = 0;
    this->LogType = EViolationLogType::VoteKick;
    this->Reason = EBanReason::CommsMisuse;
    this->DurationMins = 0.00f;
    this->Rtk = 0.00f;
    this->Rtd = 0.00f;
    this->Rsd = 0.00f;
    this->Rvd = 0.00f;
    this->Rnc = 0;
}

