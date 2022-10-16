#include "CraneComponentAnimInstance.h"

UCraneComponentAnimInstance::UCraneComponentAnimInstance() {
    this->Speed = 0.00f;
    this->WheelRadius = 1.00f;
    this->Yaw = 0.00f;
    this->HookYaw = 0.00f;
    this->HorizontalDistanceToTarget = 650.00f;
    this->CraneHeight = 0.00f;
    this->PulleyLength = 0.00f;
    this->bIsEmplaced = false;
}

