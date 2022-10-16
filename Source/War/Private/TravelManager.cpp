#include "TravelManager.h"

void UTravelManager::ProfileSyncComplete(bool bSuccess, uint32 PendingTravelId) {
}

UTravelManager::UTravelManager() {
    this->RequestTimeout = 30.00f;
    this->ProfileLoadTimeout = 10.00f;
    this->ReservationTimeout = 60.00f;
    this->FirstPlayerReservationTimeout = 15.00f;
    this->TravelBorderSize = 2000.00f;
    this->SearchBorderOffset = 500.00f;
    this->SearchMaxRadius = 1000.00f;
    this->SearchMaxRadiusVehicle = 2000.00f;
    this->SearchGroundMargin = 100.00f;
    this->SearchMinimumWaterDepth = 200.00f;
    this->OfflineCharacterOffset = 200.00f;
    this->OfflineCharacterSpacing = 200.00f;
    this->OfflineCharacterZOffset = 90.00f;
    this->ArrivalInvulnerabilityTime = 15.00f;
}

