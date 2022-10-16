#include "WarPlayerController.h"

void AWarPlayerController::ServerSignalAttemptServerTravel_Implementation() {
}
bool AWarPlayerController::ServerSignalAttemptServerTravel_Validate() {
    return true;
}

void AWarPlayerController::ServerQueueForDeployment_Implementation(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery) {
}
bool AWarPlayerController::ServerQueueForDeployment_Validate(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery) {
    return true;
}

void AWarPlayerController::ServerInitiateTravel_Implementation() {
}
bool AWarPlayerController::ServerInitiateTravel_Validate() {
    return true;
}

void AWarPlayerController::ServerGetTravelInfo_Implementation(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery) {
}
bool AWarPlayerController::ServerGetTravelInfo_Validate(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery) {
    return true;
}

void AWarPlayerController::ServerClientTravelLoadComplete_Implementation() {
}
bool AWarPlayerController::ServerClientTravelLoadComplete_Validate() {
    return true;
}

void AWarPlayerController::SelectWarDrawDebugWorld() {
}

void AWarPlayerController::EnableInputForThis(uint8 InputDisableReason) {
}

void AWarPlayerController::ClientTravelToWorldConquestMap_Implementation(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint) {
}

void AWarPlayerController::ClientTravelSuccess_Implementation(uint64 TravelId, FRegionConnectionInfo RegionConnectionInfo) {
}

void AWarPlayerController::ClientTravelProgress_Implementation(uint32 NumPlayersConnected, uint32 NumPlayersTotal) {
}

void AWarPlayerController::ClientTravelPending_Implementation(int32 PendingTravelId, EWorldConquestMapId DestinationMapId) {
}

void AWarPlayerController::ClientTravelFailure_Implementation(ETravelResult Result, int32 PartySize) {
}

void AWarPlayerController::ClientTravelComplete_Implementation(uint64 TravelId, float InvulnerabilityDuration) {
}

void AWarPlayerController::ClientTravelArrived_Implementation(FTransform ReservationLocation) {
}

void AWarPlayerController::ClientReceiveTravelInfo_Implementation(const FRegionConnectionInfo TravelInfo, const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool Success, bool bIsRecovery) {
}

void AWarPlayerController::ClientQueueForTravel_Implementation(EWorldConquestMapId DestinationMapId, FRegionConnectionInfo RegionConnectionInfo) {
}

void AWarPlayerController::ClientOnServerTravelAllowed_Implementation() {
}

void AWarPlayerController::ClientExitRecoveryMode_Implementation() {
}

void AWarPlayerController::ClientEnterRecoveryMode_Implementation(float Duration) {
}

AWarPlayerController::AWarPlayerController() {
    this->bTravelRequestIsPending = false;
    this->bTravelRequestWasSuccessful = false;
    this->bTravelReservationIsPending = false;
    this->bTravelReservationIsComplete = false;
    this->bQueuedViaBorderTravel = false;
    this->bAllowedToContinueTravelling = false;
    this->WarBeaconClient = NULL;
}

