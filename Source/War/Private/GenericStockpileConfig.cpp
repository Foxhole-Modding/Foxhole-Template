#include "GenericStockpileConfig.h"

FGenericStockpileConfig::FGenericStockpileConfig() {
    this->Type = EStockpileEntryType::None;
    this->QuantityLimit = 0;
    this->TotalQuantityLimit = 0;
}

