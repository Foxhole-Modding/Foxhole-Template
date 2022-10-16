#include "MultiplexedSkeletalMeshComponent.h"

void UMultiplexedSkeletalMeshComponent::SetEnabled(bool IsEnabled) {
}

UMultiplexedSkeletalMeshComponent::UMultiplexedSkeletalMeshComponent() {
    this->InputValue = 0;
    this->SelectedMeshIndex = 255;
    this->TransitionDownFX = NULL;
    this->TransitionUpSoundCue = NULL;
    this->Enabled = true;
}

