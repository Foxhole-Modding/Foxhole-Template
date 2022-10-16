#include "ModificationDefinition.h"

FModificationDefinition::FModificationDefinition() {
    this->RequiredSocketConnectionMask = 0;
    this->HiddenBySocketConnectionMask = 0;
    this->bIsRemovable = false;
    this->bVehicleBlocksRemoval = false;
    this->bHiddenByDefault = false;
    this->bVisualsAreClientOnly = false;
    this->bShowInBuildSite = false;
    this->TechID = ETechID::None;
    this->InfrastructureType = EInfrastructureType::None;
    this->InfrastructureAmount = 0;
}

