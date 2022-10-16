#include "ReserveStockpileData.h"

FReserveStockpileData::FReserveStockpileData() {
    this->AccessLevel = EReserveStockpileAccessLevel::Visible;
    this->PassCode = 0;
    this->ExpiryTimestampTicks = 0;
}

