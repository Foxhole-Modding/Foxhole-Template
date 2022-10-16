#include "SplineConnectorMeshConfig.h"

FSplineConnectorMeshConfig::FSplineConnectorMeshConfig() {
    this->Mesh = NULL;
    this->bReceivesDecals = false;
    this->BuildGhostMaterialOverride = NULL;
    this->BuildSiteMaterialOverride = NULL;
    this->Mode = ESplineConnectorMeshMode::Spline;
    this->bCollisionOnly = false;
    this->PhysMaterialOverride = NULL;
    this->CollisionIgnoreFlags = 0;
    this->CanCharacterStepUpOn = ECB_No;
    this->StartIndex = 0;
    this->EndIndex = 0;
    this->BoxWidth = 0.00f;
    this->BoxHeight = 0.00f;
    this->BoxLengthPadding = 0.00f;
    this->SplineMeshAxis = ESplineMeshAxis::X;
    this->SplineBoundaryMin = 0.00f;
    this->SplineBoundaryMax = 0.00f;
    this->MinSplineLength = 0.00f;
    this->bExtendSplineToMinLength = false;
    this->MinSplineLengthForCollision = 0.00f;
    this->Interval = 0.00f;
    this->IntervalDeltaPerDegree = 0.00f;
    this->bEvenlySpace = false;
    this->bLinearPlacement = false;
    this->bFillRemainder = false;
    this->bFixedPitch = false;
    this->FixedPitch = 0.00f;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->bApplySlopeOffset = false;
    this->bDisplayOnInvalidPath = false;
    this->CopyPlacementRangeFrom = 0;
    this->bIsEndCap = false;
    this->bEndCapReactsToSockets = false;
    this->bReactToSurface = false;
}

