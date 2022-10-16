#include "PlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "PlayerCameraRigComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerLOSRasterComponent.h"
#include "Components/SceneComponent.h"

class ASimVehicle;
class ARailwayTrack;
class AStructure;
class ARailVehicle;

void APlayerCharacter::ServerUpdateAimYawAndPitch_Implementation(FVector2D_NetQuantize InYawPitchPacked) {
}
bool APlayerCharacter::ServerUpdateAimYawAndPitch_Validate(FVector2D_NetQuantize InYawPitchPacked) {
    return true;
}

void APlayerCharacter::ServerToggleRailSwitch_Implementation(ARailwayTrack* RailwayTrack, int32 PathSocketId) {
}
bool APlayerCharacter::ServerToggleRailSwitch_Validate(ARailwayTrack* RailwayTrack, int32 PathSocketId) {
    return true;
}

void APlayerCharacter::ServerSyncLastWeaponInvoke_Implementation(const FCharacterInvokeInfo& ClientWeaponInvoke) {
}
bool APlayerCharacter::ServerSyncLastWeaponInvoke_Validate(const FCharacterInvokeInfo& ClientWeaponInvoke) {
    return true;
}

void APlayerCharacter::ServerSwitchSeats_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex) {
}
bool APlayerCharacter::ServerSwitchSeats_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex) {
    return true;
}

void APlayerCharacter::ServerSetIsInScopeMode_Implementation(bool InIsInScopeMode) {
}
bool APlayerCharacter::ServerSetIsInScopeMode_Validate(bool InIsInScopeMode) {
    return true;
}

void APlayerCharacter::ServerPlayEmote_Implementation(const ECharacterActivityState EmoteActivityState) {
}
bool APlayerCharacter::ServerPlayEmote_Validate(const ECharacterActivityState EmoteActivityState) {
    return true;
}

void APlayerCharacter::ServerOpenVehicleInventory_Implementation(ASimVehicle* Vehicle) {
}
bool APlayerCharacter::ServerOpenVehicleInventory_Validate(ASimVehicle* Vehicle) {
    return true;
}

void APlayerCharacter::ServerOnUseFromVehicle_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
}
bool APlayerCharacter::ServerOnUseFromVehicle_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
    return true;
}

void APlayerCharacter::ServerMountStructure_Implementation(AStructure* Structure, FActivityStateChange ActivityStateChange) {
}
bool APlayerCharacter::ServerMountStructure_Validate(AStructure* Structure, FActivityStateChange ActivityStateChange) {
    return true;
}

void APlayerCharacter::ServerLinkRailVehicles_Implementation(ARailVehicle* VehicleA, ARailVehicle* VehicleB) {
}
bool APlayerCharacter::ServerLinkRailVehicles_Validate(ARailVehicle* VehicleA, ARailVehicle* VehicleB) {
    return true;
}

void APlayerCharacter::ServerExitVehicle_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
}
bool APlayerCharacter::ServerExitVehicle_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
    return true;
}

void APlayerCharacter::ServerEnterVehicle_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, const int32 SeatIndex) {
}
bool APlayerCharacter::ServerEnterVehicle_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, const int32 SeatIndex) {
    return true;
}

void APlayerCharacter::ClientVehicleSeatSwitched_Implementation(bool bIsDriver) {
}

void APlayerCharacter::ClientSetUnmountPosition_Implementation(FVector Position, FRotator Rotation) {
}

void APlayerCharacter::ClientSetFlyMode_Implementation(const bool bInIsFlyMode, const float FlyHeight, const float FlySpeed) {
}

void APlayerCharacter::ClientOpenVehicleResponse_Implementation(ASimVehicle* Vehicle, const EOpenVehicleInventoryResponse OpenVehicleInventoryResponse) {
}

void APlayerCharacter::ClientLockStance_Implementation(ESimCharacterStance Stance, bool bLocked) {
}

void APlayerCharacter::ClientCannonLaunch_Implementation(const FVector2D_NetQuantize LaunchVelocity) {
}


void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerCharacter, YawPitchPacked);
    DOREPLIFETIME(APlayerCharacter, bIsInScopeMode);
}

APlayerCharacter::APlayerCharacter() {
    this->AimingMaxSpeedModifier = 0.50f;
    this->ControllerAimScale = 0.15f;
    this->MouseAimScale = 4.00f;
    this->NoAimYawScale = 0.20f;
    this->bDisablePlayerFogOfWar = false;
    this->AlwaysVisibleRadius = 700.00f;
    this->AimRadius = 400;
    this->ScopeRadius = 900;
    this->OfflineFxTemplate = NULL;
    this->AimUpdateRate = 10.00f;
    this->CameraRigComponent = CreateDefaultSubobject<UPlayerCameraRigComponent>(TEXT("CameraRig"));
    this->TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
    this->ScopePS = NULL;
    this->LOSPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("LOSPostProcess"));
    this->LOSRasterComponent = CreateDefaultSubobject<UPlayerLOSRasterComponent>(TEXT("LOSRasterComponent"));
    this->SprintCameraShake = NULL;
    this->GrenadeAimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrenadeAimMesh"));
    this->Grip_Standing = CreateDefaultSubobject<USceneComponent>(TEXT("Grip_Standing"));
    this->Grip_Crouched = CreateDefaultSubobject<USceneComponent>(TEXT("Grip_Crouched"));
    this->Grip_Prone = CreateDefaultSubobject<USceneComponent>(TEXT("Grip_Prone"));
    this->bIsInScopeMode = false;
}

