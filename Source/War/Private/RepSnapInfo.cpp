#include "RepSnapInfo.h"

FRepSnapInfo::FRepSnapInfo() {
    this->Type = ESnapType::None;
    this->TargetSocket = NULL;
    this->RotationZ = 0.00f;
    this->TargetPath = NULL;
    this->PathPackedAlpha = 0.00f;
}

