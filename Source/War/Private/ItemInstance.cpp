#include "ItemInstance.h"

FItemInstance::FItemInstance() {
    this->PickupCDO = NULL;
    this->ItemComponent = NULL;
    this->StackSize = 0;
    this->Payload = 0;
    this->HolderId = 0;
}

