#include "RocketLauncherProjectileDummy.h"
#include "Components/SkeletalMeshComponent.h"

void ARocketLauncherProjectileDummy::SpoolupFinished() {
}


ARocketLauncherProjectileDummy::ARocketLauncherProjectileDummy() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

