#include "FestivalFlagPickUp.h"
#include "Components/SkeletalMeshComponent.h"

AFestivalFlagPickUp::AFestivalFlagPickUp() {
    this->FlagMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Flag Mesh"));
    this->ColonialMaterial = NULL;
    this->WardenMaterial = NULL;
}

