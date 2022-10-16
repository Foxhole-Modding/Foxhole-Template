#include "FiremanMountComponent.h"

void UFiremanMountComponent::ServerBoost_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UFiremanMountComponent::ServerBoost_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UFiremanMountComponent::MulticastBoostFX_Implementation() {
}

UFiremanMountComponent::UFiremanMountComponent() {
    this->CoalPerBoost = 3;
}

