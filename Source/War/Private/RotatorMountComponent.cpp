#include "RotatorMountComponent.h"

void URotatorMountComponent::ServerOnMoveRight_Implementation(float Val) {
}
bool URotatorMountComponent::ServerOnMoveRight_Validate(float Val) {
    return true;
}

URotatorMountComponent::URotatorMountComponent() {
    this->PlayersRequiredToRotate = 1;
}

