#include "RadioBackpackItemComponent.h"

void URadioBackpackItemComponent::ServerStopTransmittingLaunchCodes_Implementation() {
}
bool URadioBackpackItemComponent::ServerStopTransmittingLaunchCodes_Validate() {
    return true;
}

void URadioBackpackItemComponent::ServerStartTransmittingLaunchCodes_Implementation(const FActivityStateChange& ActivityStateChange, const FVector StrikeLocation) {
}
bool URadioBackpackItemComponent::ServerStartTransmittingLaunchCodes_Validate(const FActivityStateChange& ActivityStateChange, const FVector StrikeLocation) {
    return true;
}

void URadioBackpackItemComponent::ClientStopLaunchCodeTransmission_Implementation() {
}

void URadioBackpackItemComponent::ClientReceiveLaunchCodes_Implementation(const uint8 LaunchCodeID) {
}

void URadioBackpackItemComponent::ClientReceiveLaunchCodeResponse_Implementation(const ETransmitResponse Response) {
}

URadioBackpackItemComponent::URadioBackpackItemComponent() {
    this->DetectionCooldown = 10.00f;
    this->DetectionRadius = 2000.00f;
}

