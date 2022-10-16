#include "StickyBombProjectile.h"
#include "Components/SkeletalMeshComponent.h"

void AStickyBombProjectile::CallDetonateWithLastHitResult() {
}

AStickyBombProjectile::AStickyBombProjectile() {
    this->BombMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BombMesh"));
    this->AttachCue = NULL;
    this->DetonationDelay = 2.50f;
}

