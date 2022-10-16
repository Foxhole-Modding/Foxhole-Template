#include "MGPillbox.h"
#include "Components/SkeletalMeshComponent.h"

AMGPillbox::AMGPillbox() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}

