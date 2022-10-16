#include "CraneMarker.h"
#include "Components/StaticMeshComponent.h"

ACraneMarker::ACraneMarker() {
    this->MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->InteractMesh = NULL;
    this->InteractGreyMesh = NULL;
    this->InteractBlockedMesh = NULL;
    this->InvalidMesh = NULL;
    this->UseMesh = NULL;
}

