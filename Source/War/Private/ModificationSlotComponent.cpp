#include "ModificationSlotComponent.h"

UModificationSlotComponent::UModificationSlotComponent() {
    this->bIsLinkedToSocket = false;
    this->bIsBlockedByLinkedSocket = false;
    this->bIsBlockedByModSlot = false;
    this->bOverrideSplineTarget = false;
    this->bIgnoreSocketModSiblings = false;
    this->bIgnoreConcreteMaterial = false;
    this->bIsBuildableUnderRoads = false;
    this->bPreviewAllInGhost = false;
    this->ActiveType = EFortModificationType::None;
    this->bRevertedToDefault = false;
    this->NumMaskBits = 0;
    this->MaskStartBit = 0;
}

