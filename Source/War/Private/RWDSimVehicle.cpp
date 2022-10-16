#include "RWDSimVehicle.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"

class UPrimitiveComponent;

void ARWDSimVehicle::ServerMoveRwd_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ARWDSimVehicle::ServerMoveRwd_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ARWDSimVehicle::ServerMoveNoBaseRwd_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool ARWDSimVehicle::ServerMoveNoBaseRwd_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void ARWDSimVehicle::ServerMoveDualRwd_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool ARWDSimVehicle::ServerMoveDualRwd_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void ARWDSimVehicle::ServerMoveDualNoBaseRwd_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool ARWDSimVehicle::ServerMoveDualNoBaseRwd_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void ARWDSimVehicle::ClientVeryShortAdjustPositionRwd_Implementation(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FQuat NewRot, FVector NewAngularMomentum) {
}

void ARWDSimVehicle::ClientAdjustPositionRwd_Implementation(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FQuat NewRot, FVector NewAngularMomentum, float NewSteeringAngle) {
}

void ARWDSimVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARWDSimVehicle, SteeringAngle);
}

ARWDSimVehicle::ARWDSimVehicle() {
    this->IdleLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("IdleLoop"));
    this->DriveLoopPitchCurve = NULL;
    this->RearLeftTireDirtLowSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearLeftTireDirtLowSpeedPS"));
    this->RearLeftTireDirtHighSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearLeftTireDirtHighSpeedPS"));
    this->RearRightTireDirtLowSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearRightTireDirtLowSpeedPS"));
    this->RearRightTireDirtHighSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearRightTireDirtHighSpeedPS"));
    this->MainDirtLowSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MainDirtLowSpeedPS"));
    this->MainDirtHighSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MainDirtHighSpeedPS"));
    this->SkiddingDirtPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SkiddingDirtPS"));
    this->TireFXLowSpeedThreshold = 10.00f;
    this->TireFXHighSpeedThreshold = 15.00f;
    this->MainFXLowSpeedThreshold = 10.00f;
    this->MainFXHighSpeedThreshold = 17.00f;
    this->SkiddingFXSpeedThreshold = 4.00f;
    this->SteeringAngle = 0.00f;
}

