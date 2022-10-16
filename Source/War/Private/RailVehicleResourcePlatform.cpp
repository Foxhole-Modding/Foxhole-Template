#include "RailVehicleResourcePlatform.h"
#include "ReplicatedGenericStockpileComponent.h"

ARailVehicleResourcePlatform::ARailVehicleResourcePlatform() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}

