#include "ItemHolderComponent.h"

class AItemPickup;

void UItemHolderComponent::ClientImportItem_Implementation(const AItemPickup* ItemCDO) {
}

void UItemHolderComponent::ClientExportItem_Implementation(const int32 SlotIndex) {
}

UItemHolderComponent::UItemHolderComponent() {
    this->InventoryType = EInventoryType::Default;
    this->NextHolderId = 1;
    this->bForceAllItemsAreStackable = false;
}

