#include "CraneOperatorComponent.h"

class ASimVehicle;
class AActor;

void UCraneOperatorComponent::ServerUpdateHookRotation_Implementation(const float HookRotation) {
}
bool UCraneOperatorComponent::ServerUpdateHookRotation_Validate(const float HookRotation) {
    return true;
}

void UCraneOperatorComponent::ServerUpdateAimLocation_Implementation(FVector_NetQuantize AimLocation) {
}
bool UCraneOperatorComponent::ServerUpdateAimLocation_Validate(FVector_NetQuantize AimLocation) {
    return true;
}

void UCraneOperatorComponent::ServerTransferShippableTo_Implementation(AActor* Actor) {
}
bool UCraneOperatorComponent::ServerTransferShippableTo_Validate(AActor* Actor) {
    return true;
}

void UCraneOperatorComponent::ServerToggleDeployment_Implementation() {
}
bool UCraneOperatorComponent::ServerToggleDeployment_Validate() {
    return true;
}

void UCraneOperatorComponent::ServerSetIsScoping_Implementation(const bool bIsScoping) {
}
bool UCraneOperatorComponent::ServerSetIsScoping_Validate(const bool bIsScoping) {
    return true;
}

void UCraneOperatorComponent::ServerPickUpShippableFrom_Implementation(ASimVehicle* Vehicle) {
}
bool UCraneOperatorComponent::ServerPickUpShippableFrom_Validate(ASimVehicle* Vehicle) {
    return true;
}

void UCraneOperatorComponent::ServerPickUpShippable_Implementation(AActor* Actor) {
}
bool UCraneOperatorComponent::ServerPickUpShippable_Validate(AActor* Actor) {
    return true;
}

void UCraneOperatorComponent::ServerDropShippable_Implementation() {
}
bool UCraneOperatorComponent::ServerDropShippable_Validate() {
    return true;
}

void UCraneOperatorComponent::ClientShowShippableStatus_Implementation(const EShippableStatus Status) {
}

UCraneOperatorComponent::UCraneOperatorComponent() {
}

