#include "MultiplexedStaticMeshComponent.h"

void UMultiplexedStaticMeshComponent::SetEnabled(bool IsEnabled) {
}

UMultiplexedStaticMeshComponent::UMultiplexedStaticMeshComponent() {
    this->InputValue = 0;
    this->SelectedMeshIndex = 255;
    this->TransitionDownFX = NULL;
    this->TransitionUpSoundCue = NULL;
    this->Enabled = true;
}

