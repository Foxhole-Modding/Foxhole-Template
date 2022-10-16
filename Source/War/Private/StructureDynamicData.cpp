#include "StructureDynamicData.h"

FStructureDynamicData::FStructureDynamicData() {
    this->MaxHealth = 0;
    this->DecayStartHours = 0.00f;
    this->DecayDurationHours = 0.00f;
    this->RepairCost = 0;
    this->StructuralIntegrity = 0.00f;
    this->StoredItemCapacity = 0;
    this->RamDamageReceivedFlags = 0;
    this->bCanBeHarvested = false;
    this->IsVaultable = false;
    this->bIsDamagedWhileDrivingOver = false;
}

