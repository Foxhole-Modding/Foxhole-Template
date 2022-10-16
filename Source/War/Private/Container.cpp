#include "Container.h"
#include "Components/StaticMeshComponent.h"

AContainer::AContainer() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->GenericStockpileComponent = NULL;
}

