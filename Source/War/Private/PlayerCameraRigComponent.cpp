#include "PlayerCameraRigComponent.h"

UPlayerCameraRigComponent::UPlayerCameraRigComponent() {
    this->TargetArmLength = 2000.00f;
    this->bEnableCameraLag = false;
    this->MaxDistanceForCameraLerp = 0.00f;
}

