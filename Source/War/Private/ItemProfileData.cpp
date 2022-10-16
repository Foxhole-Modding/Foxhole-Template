#include "ItemProfileData.h"

FItemProfileData::FItemProfileData() {
    this->bIsStockpilable = false;
    this->bIsStackable = false;
    this->bIsConvertibleToCrate = false;
    this->bIsCratable = false;
    this->bIsStockpiledWithAmmo = false;
    this->bUsableInVehicle = false;
    this->StackTransferLimit = 0;
    this->RetrieveQuantity = 0;
    this->ReserveStockpileMaxQuantity = 0;
}

