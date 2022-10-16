#include "FortTurretMG.h"
#include "Components/SkeletalMeshComponent.h"

AFortTurretMG::AFortTurretMG() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}

