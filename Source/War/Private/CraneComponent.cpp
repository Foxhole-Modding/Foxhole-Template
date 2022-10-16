#include "CraneComponent.h"
#include "Net/UnrealNetwork.h"

class ASimVehicle;
class AActor;

void UCraneComponent::ServerUpdateHookRotation_Implementation(const float HookRotation) {
}
bool UCraneComponent::ServerUpdateHookRotation_Validate(const float HookRotation) {
    return true;
}

void UCraneComponent::ServerUpdateAimLocation_Implementation(FVector_NetQuantize AimLocation) {
}
bool UCraneComponent::ServerUpdateAimLocation_Validate(FVector_NetQuantize AimLocation) {
    return true;
}

void UCraneComponent::ServerTransferShippableTo_Implementation(AActor* Actor) {
}
bool UCraneComponent::ServerTransferShippableTo_Validate(AActor* Actor) {
    return true;
}

void UCraneComponent::ServerToggleDeployment_Implementation() {
}
bool UCraneComponent::ServerToggleDeployment_Validate() {
    return true;
}

void UCraneComponent::ServerSetIsScoping_Implementation(const bool bInIsScoping) {
}
bool UCraneComponent::ServerSetIsScoping_Validate(const bool bInIsScoping) {
    return true;
}

void UCraneComponent::ServerPickUpShippableFrom_Implementation(ASimVehicle* Vehicle) {
}
bool UCraneComponent::ServerPickUpShippableFrom_Validate(ASimVehicle* Vehicle) {
    return true;
}

void UCraneComponent::ServerPickUpShippable_Implementation(AActor* Actor) {
}
bool UCraneComponent::ServerPickUpShippable_Validate(AActor* Actor) {
    return true;
}

void UCraneComponent::ServerDropShippable_Implementation() {
}
bool UCraneComponent::ServerDropShippable_Validate() {
    return true;
}

void UCraneComponent::OnRep_State(const TEnumAsByte<ECraneState> PreviousState) {
}

void UCraneComponent::OnRep_ShippableData() {
}

void UCraneComponent::OnRep_RelevantShippable() {
}

void UCraneComponent::OnRep_PulleyLength(const float PreviousPulleyLength) {
}

void UCraneComponent::OnRep_HorizontalDistanceToTarget(const float PreviousHorizontalDistanceToTarget) {
}

void UCraneComponent::OnRep_CurrentShippable() {
}

void UCraneComponent::OnRep_CabRotationZ(const float PreviousCabRotationZ) {
}

void UCraneComponent::ClientShowShippableStatus_Implementation(const EShippableStatus Status) {
}

void UCraneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCraneComponent, State);
    DOREPLIFETIME(UCraneComponent, HorizontalDistanceToTarget);
    DOREPLIFETIME(UCraneComponent, CraneHeight);
    DOREPLIFETIME(UCraneComponent, PulleyLength);
    DOREPLIFETIME(UCraneComponent, CabRotationZ);
    DOREPLIFETIME(UCraneComponent, HookRotationZ);
    DOREPLIFETIME(UCraneComponent, CurrentShippable);
    DOREPLIFETIME(UCraneComponent, ShippableData);
    DOREPLIFETIME(UCraneComponent, RelevantShippable);
}

UCraneComponent::UCraneComponent() {
    this->State = Inactive;
    this->HorizontalDistanceToTarget = 0.00f;
    this->CraneHeight = 0.00f;
    this->PulleyLength = 0.00f;
    this->CabRotationZ = 0.00f;
    this->HookRotationZ = 0.00f;
    this->RelevantShippable = NULL;
    this->DynamicMeshComponent = NULL;
}

