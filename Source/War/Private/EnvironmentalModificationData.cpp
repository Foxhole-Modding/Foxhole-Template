#include "EnvironmentalModificationData.h"

UEnvironmentalModificationData::UEnvironmentalModificationData() {
    this->MaxCraterCoverage = 0.00f;
    this->MinCraterSpawnDevastation = 0.00f;
    this->CraterSpawnProbability = 0.00f;
    this->MaxCraterAngle = 0.00f;
    this->TownDecalDistance = 2600.00f;
    this->DecalSortOrder = 5;
    this->MaxTreeRemovalPercentage = 0.20f;
    this->FoliageRemovalThresholdWeights[0] = 0.00f;
    this->FoliageRemovalThresholdWeights[1] = 0.00f;
    this->FoliageRemovalThresholdWeights[2] = 0.00f;
    this->FoliageRemovalThresholdWeights[3] = 0.00f;
    this->FoliageRemovalThresholdWeights[4] = 0.00f;
    this->FoliageRemovalThresholdWeights[5] = 0.00f;
    this->FoliageRemovalThresholdWeights[6] = 0.00f;
    this->FoliageRemovalThresholdWeights[7] = 0.00f;
    this->FoliageRemovalThresholdWeights[8] = 0.00f;
    this->FoliageRemovalThresholdWeights[9] = 0.00f;
    this->FoliageRemovalThresholdWeights[10] = 0.00f;
    this->FoliageRemovalThresholdWeights[11] = 0.00f;
    this->FoliageRemovalThresholdWeights[12] = 0.00f;
    this->FoliageRemovalThresholdWeights[13] = 0.00f;
    this->FoliageRemovalThresholdWeights[14] = 0.00f;
    this->FoliageRemovalThresholdWeights[15] = 0.00f;
    this->SampleExtents = 2500.00f;
    this->DevastationToContrast = NULL;
    this->DevastationToSaturation = NULL;
    this->SunHeightToDevastationPostProcessMultiplier = NULL;
}

