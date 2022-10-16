#include "SplineConnectorComponent.h"

USplineConnectorComponent::USplineConnectorComponent() {
    this->MaxTargetDistance = 0.00f;
    this->MaxTargetAngle = 0.00f;
    this->bIgnoreTargetAngle = false;
    this->SurfaceSampleResolution = 100.00f;
    this->PathMode = EConnectorPathMode::Spline;
    this->bUseBiarcPathModeWhenSnapped = false;
    this->bWorldSpaceArcTangents = false;
    this->MinBuffer = 100.00f;
    this->MaxBuffer = 100.00f;
    this->MinRadius = 100.00f;
    this->MaxRadius = 100.00f;
    this->MaxArcAngle = 0.00f;
    this->BuildFootprintShapeType = ESplineFootprintShapeType::Capsule;
    this->BuildFootprintCapsuleRadius = 0.00f;
    this->BuildFootprintCapsuleHalfHeight = 0.00f;
    this->BuildFootprintWidth = 0.00f;
    this->BuildFootprintLength = 0.00f;
    this->BuildFootprintHeight = 0.00f;
    this->BuildFootprintVerticalOffset = 0.00f;
    this->BuildFootprintStartOffset = 0.00f;
    this->BuildFootprintEndOffset = 0.00f;
    this->BuildFootprintBoxEndVerticalOffset = 0.00f;
    this->BuildFootprintBoxEndLengthOverride = 0.00f;
    this->BuildFootprintBoxEndHeightOverride = 0.00f;
    this->bUseExtendedFootprint = false;
    this->MaxSlopeAngle = 0.00f;
    this->MaxFootprintDepthBelowSurface = 0.00f;
    this->MaxFootprintHeightAboveSurface = 0.00f;
    this->MaxHeightAboveSurfaceAtEnds = 0.00f;
    this->NumHeightEndSamples = 0;
    this->bNoPlacementAboveWater = false;
    this->Alpha = 0.00f;
}

