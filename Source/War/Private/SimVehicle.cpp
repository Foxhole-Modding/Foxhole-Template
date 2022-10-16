#include "SimVehicle.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "PlayerCameraRigComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "AFKTimeoutComponent.h"

class UPrimitiveComponent;
class AActor;
class APlayerCharacter;
class ASimCharacter;

void ASimVehicle::VehicleCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASimVehicle::ServerSwitchSeats_Implementation(int32 NewSeatIndex) {
}
bool ASimVehicle::ServerSwitchSeats_Validate(int32 NewSeatIndex) {
    return true;
}

void ASimVehicle::ServerStartBoost_Implementation() {
}
bool ASimVehicle::ServerStartBoost_Validate() {
    return true;
}

void ASimVehicle::ServerOnMount_Implementation(APlayerCharacter* PlayerCharacter) {
}
bool ASimVehicle::ServerOnMount_Validate(APlayerCharacter* PlayerCharacter) {
    return true;
}

void ASimVehicle::ServerFire_Implementation() {
}
bool ASimVehicle::ServerFire_Validate() {
    return true;
}

void ASimVehicle::ServerDeployGunner_Implementation() {
}
bool ASimVehicle::ServerDeployGunner_Validate() {
    return true;
}

void ASimVehicle::OnRep_Tier() {
}

void ASimVehicle::OnRep_TankArmour() {
}

void ASimVehicle::OnRep_Subsystems(const uint8 PreviousSubsystems) {
}

void ASimVehicle::OnRep_ItemHolderItems() {
}

void ASimVehicle::OnRep_IsVehicleOn() {
}

void ASimVehicle::OnRep_IsCommanderHatchOpen() {
}

void ASimVehicle::OnRep_Health() {
}

void ASimVehicle::OnRep_FuelTank(const FFuelTank& PreviousFuelTank) {
}

void ASimVehicle::OnRep_ActiveModularMounts() {
}

void ASimVehicle::MulticastPlayLockFX_Implementation() {
}

void ASimVehicle::MulticastPassengerExited_Implementation(int32 SeatIndex) {
}

void ASimVehicle::MulticastPassengerEntered_Implementation(int32 SeatIndex) {
}

void ASimVehicle::MulticastOnBoostEntered_Implementation() {
}

void ASimVehicle::MulticastApplyPenetrateHit_Implementation(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType) {
}

void ASimVehicle::MulticastApplyFatalHit_Implementation() {
}

void ASimVehicle::MulticastApplyDeflectHit_Implementation(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType) {
}

float ASimVehicle::GetTurnAngle() const {
    return 0.0f;
}

bool ASimVehicle::GetTopHatchOpen() const {
    return false;
}

void ASimVehicle::ClientEndActivityState_Implementation(ASimCharacter* CharacterToInterrupt) {
}


void ASimVehicle::AllFire_Implementation() {
}

void ASimVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimVehicle, Health);
    DOREPLIFETIME(ASimVehicle, TankArmour);
    DOREPLIFETIME(ASimVehicle, Subsystems);
    DOREPLIFETIME(ASimVehicle, ActiveModularMounts);
    DOREPLIFETIME(ASimVehicle, FuelTank);
    DOREPLIFETIME(ASimVehicle, bIsVehicleOn);
    DOREPLIFETIME(ASimVehicle, bIsVehicleLocked);
    DOREPLIFETIME(ASimVehicle, bIsCommanderHatchOpen);
    DOREPLIFETIME(ASimVehicle, bIsReservable);
    DOREPLIFETIME(ASimVehicle, TeamId);
    DOREPLIFETIME(ASimVehicle, ItemHolderItems);
    DOREPLIFETIME(ASimVehicle, CoalitionId);
    DOREPLIFETIME(ASimVehicle, Tier);
    DOREPLIFETIME(ASimVehicle, DeploymentLogic);
}

ASimVehicle::ASimVehicle() {
    this->bInterpolatePitch = false;
    this->Icon = NULL;
    this->TechID = ETechID::None;
    this->BuildSiteClass = NULL;
    this->VehicleBuildType = EVehicleBuildType::NotBuildable;
    this->FactionVariant = EFactionId::NoTeam;
    this->VehicleProfileType = EVehicleProfileType::Default;
    this->VehicleMovementProfileType = EVehicleMovementProfileType::Default;
    this->ArmourType = EArmourType::None;
    this->bCanDriveOverTrenches = false;
    this->Health = 300;
    this->TankArmour = 0;
    this->Subsystems = 0;
    this->ActiveModularMounts = 0;
    this->bLimitInventoryToAmmo = false;
    this->bIsStockpilable = true;
    this->bIsReserveStockpiled = false;
    this->bIsVehicleOn = false;
    this->bIsVehicleLocked = false;
    this->bIsCommanderHatchOpen = false;
    this->bIsReservable = false;
    this->TeamId = 255;
    this->DepthCuttoffForSwimDamage = 0.00f;
    this->CommanderIndex = -1;
    this->DestroyedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestroyedMesh"));
    this->MinorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MinorDamagePS"));
    this->MajorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MajorDamagePS"));
    this->DestroyedFX = NULL;
    this->DestroyedSoundCue = NULL;
    this->BreakdownSoundCue = NULL;
    this->BoostSoundCue = NULL;
    this->CharatcerHitSound = NULL;
    this->EnvironmentHitSound = NULL;
    this->DriveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DriveLoop"));
    this->BackUpSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("BackUpSFXLoop"));
    this->LockSound = NULL;
    this->CameraRigComponent = CreateDefaultSubobject<UPlayerCameraRigComponent>(TEXT("CameraRigVehicle"));
    this->FrontAxleCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FrontAxelCastLocation"));
    this->RearAxleCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RearAxleCastLocation"));
    this->FrontLeftRollCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FrontRightAxleCastLocation"));
    this->FrontRightRollCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RearRightAxleCastLocation"));
    this->LeftSideTrackLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftSideTrackLocation"));
    this->RightSideTrackLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightSideTrackLocation"));
    this->VehicleCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("VehicleCollision"));
    this->PassengerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("PassengerBaseBox"));
    this->AFKTimeoutComponent = CreateDefaultSubobject<UAFKTimeoutComponent>(TEXT("AFKTimeoutComponent"));
    this->ItemHolder = NULL;
    this->DefaultTreadTime = 0.10f;
    this->LinearSpeedToTurnSpeedMapCurve = NULL;
    this->LinearSpeedToWaterTurnSpeedMapCurve = NULL;
    this->BoostSpeedModifier = 1.00f;
    this->BoostGasUsageModifier = 1.00f;
    this->bCanMoveUnderBridges = false;
    this->ServerAnimTickMode = EServerAnimTickMode::NeverTicks;
    this->CoalitionId = 0;
    this->Tier = ETechTreeTier::One;
    this->bIncludeInRecoverySaves = true;
    this->bDoPenetratingShotsReduceTankArmour = true;
    this->VehiclesPerCrateBonusQuantity = 0;
    this->bSupportsFastAttachedMove = true;
}

