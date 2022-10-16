#include "RailPhysicsState.h"

FRailPhysicsState::FRailPhysicsState() {
    this->FrontTrack = NULL;
    this->RearTrack = NULL;
    this->LinearMomentum = 0.00f;
    this->DeferredImpulses = 0.00f;
    this->Forces = 0.00f;
    this->LinearSpeed = 0.00f;
    this->FrontAlpha = 0.00f;
    this->RearAlpha = 0.00f;
    this->bFrontWagonToRail = false;
    this->bRearWagonToRail = false;
    this->bWasCollidingWithTrailer = false;
    this->bWasBlocked = false;
}

