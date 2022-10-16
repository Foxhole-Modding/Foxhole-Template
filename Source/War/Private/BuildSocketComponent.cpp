#include "BuildSocketComponent.h"

UBuildSocketComponent::UBuildSocketComponent() {
    this->bDisabled = false;
    this->bIsUnidirectional = false;
    this->Direction = ESocketDirection::None;
    this->MaxRotation = 0.00f;
    this->SlopeRotationMode = ESlopeRotationMode::OpposingSockets;
    this->MaxZRotation = 0.00f;
    this->bDoLandscapeChecks = true;
    this->MaxHeightAboveLandscape = 100.00f;
    this->MaxDepthBelowLandscape = 20.00f;
    this->bAllowMultipleOverlaps = false;
    this->MinimumPathSeparation = 0.00f;
    this->bOnlyTestMinimumPathSeparationOnUnconnected = false;
    this->bAllowRotatedPlacement = false;
}

