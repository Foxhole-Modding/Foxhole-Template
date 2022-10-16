#include "MeshConfigSurfaceSettings.h"

FMeshConfigSurfaceSettings::FMeshConfigSurfaceSettings() {
    this->bEnableSurfaceDeltaLowerBound = false;
    this->SurfaceDeltaLowerBound = 0.00f;
    this->bEnableSurfaceDeltaUpperBound = false;
    this->SurfaceDeltaUpperBound = 0.00f;
    this->bRequireBothSidesWithinBounds = false;
}

