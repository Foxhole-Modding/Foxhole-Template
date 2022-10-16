#include "BoundaryHex.h"
#include "Components/StaticMeshComponent.h"

ABoundaryHex::ABoundaryHex() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->EditorMesh = NULL;
}

