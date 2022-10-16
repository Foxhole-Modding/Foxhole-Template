#include "CraneSpawnLocationComponent.h"

UCraneSpawnLocationComponent::UCraneSpawnLocationComponent() {
    this->CraneClass = NULL;
    this->Crane = NULL;
    this->UseAreaBox = NULL;
    this->bIsSpawned = false;
}

