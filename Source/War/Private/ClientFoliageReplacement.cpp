#include "ClientFoliageReplacement.h"
#include "Components/StaticMeshComponent.h"

void AClientFoliageReplacement::OnStateChanged_Implementation(EClientFoliageReplacementState NewState) {
}

AClientFoliageReplacement::AClientFoliageReplacement() {
    this->DestroyedMesh = NULL;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->CriticalThreshold = 0.20f;
    this->State = EClientFoliageReplacementState::Initial;
    this->OriginalComponent = NULL;
}

