#include "RailVehicle.h"
#include "Net/UnrealNetwork.h"
#include "RailCouplerUseComponent.h"
#include "Components/AudioComponent.h"

class ARailwayTrack;
class ARailVehicle;

void ARailVehicle::ServerRequestTrainInfo_Implementation() {
}
bool ARailVehicle::ServerRequestTrainInfo_Validate() {
    return true;
}

void ARailVehicle::ServerRailMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode) {
}
bool ARailVehicle::ServerRailMoveDual_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode) {
    return true;
}

void ARailVehicle::ServerRailMove_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode) {
}
bool ARailVehicle::ServerRailMove_Validate(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode) {
    return true;
}

void ARailVehicle::OnRep_RailwayMovement() {
}

void ARailVehicle::ClientUpdateTrainInfo_Implementation(const TArray<ARailVehicle*>& RailVehicles) {
}

void ARailVehicle::ClientRailAdjustPosition_Implementation(float Timestamp, uint8 ServerMovementMode, const TArray<FRepRailwayMovement>& NewReplicatedMovement) {
}

void ARailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARailVehicle, RepTrainMovement);
}

ARailVehicle::ARailVehicle() {
    this->bNeedsSkelmeshTickForMovement = false;
    this->WheelBase = 0.00f;
    this->bIsPowered = false;
    this->TrackGauge = ETrackGauge::Large;
    this->FrontCoupler = CreateDefaultSubobject<URailCouplerUseComponent>(TEXT("FrontCoupler"));
    this->RearCoupler = CreateDefaultSubobject<URailCouplerUseComponent>(TEXT("RearCoupler"));
    this->FrontCableComponent = NULL;
    this->IdleLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("IdleLoop"));
    this->BrakeLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("BrakeLoop"));
    this->FrontClacks = CreateDefaultSubobject<UAudioComponent>(TEXT("FrontClacks"));
    this->RearClacks = CreateDefaultSubobject<UAudioComponent>(TEXT("RearClacks"));
    this->SavedFrontTrackAlpha = 0.00f;
    this->LastFrontBogieTrack = NULL;
    this->LastRearBogieTrack = NULL;
    this->bIsBoosting = false;
    this->BorderTravelOverrideExtent = 0.00f;
}

