#include "TripodMountedStructure.h"
#include "Components/SkeletalMeshComponent.h"

ATripodMountedStructure::ATripodMountedStructure() {
    this->TripodMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TripodMesh"));
    this->GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
}

