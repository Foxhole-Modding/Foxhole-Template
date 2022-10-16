#include "DestructibleProp.h"

void ADestructibleProp::MulticastApplyFatalHit_Implementation() {
}

ADestructibleProp::ADestructibleProp() {
    this->DestroyedFX = NULL;
    this->DestroyedSoundCue = NULL;
}

