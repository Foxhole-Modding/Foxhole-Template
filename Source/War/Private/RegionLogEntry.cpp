#include "RegionLogEntry.h"

FRegionLogEntry::FRegionLogEntry() {
    this->Type = ERegionLogEntryType::None;
    this->Value = 0;
    this->LocationX = 0.00f;
    this->LocationY = 0.00f;
    this->RegionLogId = 0;
}

