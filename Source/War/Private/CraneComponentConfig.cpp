#include "CraneComponentConfig.h"

FCraneComponentConfig::FCraneComponentConfig() {
    this->GlobalShippableInfo = NULL;
    this->AimMarker = NULL;
    this->GhostMaterial = NULL;
    this->GhostMaterialIndices[0] = 0;
    this->GhostMaterialIndices[1] = 0;
    this->ArmMovementSFXLoop = NULL;
    this->DeployingSFXLoop = NULL;
    this->PulleyMovementSFXLoop = NULL;
    this->DeployedSFXTrigger = NULL;
    this->PickUpSFXTrigger = NULL;
    this->DropOffSFXTrigger = NULL;
    this->MaxUndeployedShippableSize = EShippableType::None;
    this->DeployedCameraViewRadius = 0.00f;
    this->MinHorizontalDistanceToTarget = 0.00f;
    this->MaxHorizontalDistanceToTarget = 0.00f;
    this->MaxHeight = 0.00f;
    this->PulleyOffset = 0.00f;
    this->DefaultCabRotationZ = 0.00f;
    this->CabRotationSpeed = 0.00f;
    this->CabRotationSpeedWithShippable = 0.00f;
    this->HorizontalArmSpeed = 0.00f;
    this->HorizontalArmSpeedWithShippable = 0.00f;
    this->VerticalArmSpeed = 0.00f;
    this->VerticalArmSpeedWithShippable = 0.00f;
    this->PulleySpeed = 0.00f;
    this->PulleySpeedWithShippable = 0.00f;
    this->HookRotationSpeed = 0.00f;
    this->HookRotationSpeedWithShippable = 0.00f;
    this->bIsAlwaysDeployed = false;
    this->bRequiresPower = false;
}

