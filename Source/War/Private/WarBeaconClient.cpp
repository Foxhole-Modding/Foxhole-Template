#include "WarBeaconClient.h"

void AWarBeaconClient::ServerRequestQueueStatusUpdate_Implementation() {
}
bool AWarBeaconClient::ServerRequestQueueStatusUpdate_Validate() {
    return true;
}

void AWarBeaconClient::ServerLeaveQueue_Implementation() {
}
bool AWarBeaconClient::ServerLeaveQueue_Validate() {
    return true;
}

void AWarBeaconClient::ServerJoinQueue_Implementation(FWarBeaconJoinRequestData JoinRequestData) {
}
bool AWarBeaconClient::ServerJoinQueue_Validate(FWarBeaconJoinRequestData JoinRequestData) {
    return true;
}

void AWarBeaconClient::ClientUpdateQueueStatus_Implementation(const int32 NumPlayersAhead) {
}

void AWarBeaconClient::ClientPlayerIsBannedResponse_Implementation(const bool IsBanned, const int64 BanDurationTicks, const FBanReasonInfo& BanReasonInfo) {
}

void AWarBeaconClient::ClientOnServerTravelling_Implementation() {
}

void AWarBeaconClient::ClientJoinServer_Implementation(const uint8 TeamId) {
}

void AWarBeaconClient::ClientJoinQueueResponse_Implementation(const EJoinWarResponse JoinWarResponse) {
}

AWarBeaconClient::AWarBeaconClient() {
}

