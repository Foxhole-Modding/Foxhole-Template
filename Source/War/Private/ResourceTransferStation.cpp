#include "ResourceTransferStation.h"
#include "ReplicatedGenericStockpileComponent.h"
#include "Components/SceneComponent.h"

AResourceTransferStation::AResourceTransferStation() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
}

