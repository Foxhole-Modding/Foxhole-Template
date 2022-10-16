#include "Monument.h"
#include "Components/StaticMeshComponent.h"
#include "UseMonumentComponent.h"

AMonument::AMonument() {
    this->MonumentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MonumentMesh"));
    this->UseMonumentComponent = CreateDefaultSubobject<UUseMonumentComponent>(TEXT("UseMonument"));
    this->MonumentIndex = -1;
    this->MonumentType = EMonumentType::None;
}

