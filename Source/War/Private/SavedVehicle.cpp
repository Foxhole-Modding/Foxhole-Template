#include "SavedVehicle.h"

FSavedVehicle::FSavedVehicle() {
    this->ActorClass = NULL;
    this->bFacingForward = false;
    this->RailEntryTrackId = 0;
    this->RailEntryPackedAlpha = 0.00f;
    this->bRailIsTailFirst = false;
}

