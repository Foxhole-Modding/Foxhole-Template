#include "TechTreeComponentItem.h"

FTechTreeComponentItem::FTechTreeComponentItem() {
    this->TechID = ETechComponentID::None;
    this->NextTechID = ETechComponentID::None;
    this->InfrastructureType = EInfrastructureType::None;
    this->Requirement = 0;
    this->ModRequirement = 0;
}

