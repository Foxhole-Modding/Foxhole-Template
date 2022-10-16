#include "ShovelComponent.h"

void UShovelComponent::ServerPlaceTrench_Implementation(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
}
bool UShovelComponent::ServerPlaceTrench_Validate(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
    return true;
}

void UShovelComponent::MulticastPlayFX_Implementation() {
}

UShovelComponent::UShovelComponent() {
    this->ImpactEffect = NULL;
}

