#include "SavedShippableData.h"

FSavedShippableData::FSavedShippableData() {
    this->Fuel = 0.00f;
    this->Payload = 0;
    this->AltPayload = 0;
    this->Temperature = 0;
    this->TeamId = 0;
    this->bIsReservable = false;
    this->TankArmour = 0;
}

