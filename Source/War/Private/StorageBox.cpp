#include "StorageBox.h"
#include "Components/StaticMeshComponent.h"

AStorageBox::AStorageBox() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ReplenishRate = 0.00f;
    this->bReplenishFirstItem = false;
    this->bReplenishedOnce = false;
}

