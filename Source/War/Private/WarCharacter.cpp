#include "WarCharacter.h"
#include "Net/UnrealNetwork.h"
#include "StealthComponent.h"

class AStructure;
class APawn;

void AWarCharacter::ServerUseStructure_Implementation(AStructure* Structure) {
}
bool AWarCharacter::ServerUseStructure_Validate(AStructure* Structure) {
    return true;
}

void AWarCharacter::ServerUnstuck_Implementation() {
}
bool AWarCharacter::ServerUnstuck_Validate() {
    return true;
}

void AWarCharacter::ServerPlaceCalloutMarker_Implementation(const FVector_NetQuantize& DestinationPosition) {
}
bool AWarCharacter::ServerPlaceCalloutMarker_Validate(const FVector_NetQuantize& DestinationPosition) {
    return true;
}

void AWarCharacter::OnRep_Temperature(const uint8 PreviousTemperature) {
}

void AWarCharacter::MulticastPlaceCalloutMarker_Implementation(const int8 TeamId, const FVector_NetQuantize& DestinationPosition) {
}

bool AWarCharacter::IsPawnVisible(const APawn* TargetPawn) const {
    return false;
}

void AWarCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWarCharacter, ReplicatedTemperature);
    DOREPLIFETIME(AWarCharacter, PlayerFlags);
}

AWarCharacter::AWarCharacter() {
    this->ViewRadiusDegrees = 0.00f;
    this->Temperature = 1.00f;
    this->ReplicatedTemperature = 100;
    this->PlayerFlags = 0;
    this->StealthComponent = CreateDefaultSubobject<UStealthComponent>(TEXT("StealthComponent"));
    this->CalloutMarkerBeingPlaced = NULL;
}

