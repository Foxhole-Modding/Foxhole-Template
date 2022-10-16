#include "Outpost.h"
#include "Components/StaticMeshComponent.h"

AOutpost::AOutpost() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

