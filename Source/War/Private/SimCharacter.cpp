#include "SimCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "ItemHolderComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EquipmentHolderComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

class AItemPickup;
class UModificationSlotComponent;
class ASimCharacter;
class ALadder;
class ASimVehicle;

void ASimCharacter::StopFiring() {
}

void ASimCharacter::StartFiring() {
}

void ASimCharacter::SlowTick() {
}

void ASimCharacter::ServerUseItem_Implementation(const int8 Index, UItemHolderComponent* InHolder) {
}
bool ASimCharacter::ServerUseItem_Validate(const int8 Index, UItemHolderComponent* InHolder) {
    return true;
}

void ASimCharacter::ServerTakePickup_Implementation(AItemPickup* ItemPickup) {
}
bool ASimCharacter::ServerTakePickup_Validate(AItemPickup* ItemPickup) {
    return true;
}

void ASimCharacter::ServerSimulateMeleeAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerSimulateMeleeAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerSetSprinting_Implementation(bool bIsSprinting) {
}
bool ASimCharacter::ServerSetSprinting_Validate(bool bIsSprinting) {
    return true;
}

void ASimCharacter::ServerSetIsProne_Implementation(bool bIsProne) {
}
bool ASimCharacter::ServerSetIsProne_Validate(bool bIsProne) {
    return true;
}

void ASimCharacter::ServerReloadFromWater_Implementation(int32 AmmoIx, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerReloadFromWater_Validate(int32 AmmoIx, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerReload_Implementation(int32 AmmoIx, UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerReload_Validate(int32 AmmoIx, UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerModifyStructure_Implementation(FActivityStateChange ActivityStateChange, UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask) {
}
bool ASimCharacter::ServerModifyStructure_Validate(FActivityStateChange ActivityStateChange, UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask) {
    return true;
}

void ASimCharacter::ServerGiveUpFromWoundedState_Implementation() {
}
bool ASimCharacter::ServerGiveUpFromWoundedState_Validate() {
    return true;
}

void ASimCharacter::ServerDropLargeItem_Implementation() {
}
bool ASimCharacter::ServerDropLargeItem_Validate() {
    return true;
}

void ASimCharacter::ServerDropItem_Implementation(const int8 Index) {
}
bool ASimCharacter::ServerDropItem_Validate(const int8 Index) {
    return true;
}

void ASimCharacter::ServerClimbLadder_Implementation(ALadder* Ladder, bool bEntering, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerClimbLadder_Validate(ALadder* Ladder, bool bEntering, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerClimb_Implementation(FVector2D InputDirection, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerClimb_Validate(FVector2D InputDirection, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerChangeItemEquipState_Implementation(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange) {
}
bool ASimCharacter::ServerChangeItemEquipState_Validate(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerCarryWounded_Implementation(ASimCharacter* WoundedCharacter) {
}
bool ASimCharacter::ServerCarryWounded_Validate(ASimCharacter* WoundedCharacter) {
    return true;
}

void ASimCharacter::OnRep_ZombieType() {
}

void ASimCharacter::OnRep_VisualCustomizationMaskNotify() {
}

void ASimCharacter::OnRep_TeamIdNotify() {
}

void ASimCharacter::OnRep_Muddyness(const uint8 PreviousMuddyness) {
}

void ASimCharacter::OnRep_MountComponent() {
}

void ASimCharacter::OnRep_IsWearingGasMask() {
}

void ASimCharacter::OnRep_IsBleeding() {
}

void ASimCharacter::OnRep_Health() {
}

void ASimCharacter::OnRep_CurrentVehicle(ASimVehicle* PreviousVehicle) {
}

void ASimCharacter::OnRep_CurrentOccupiedStructure() {
}

void ASimCharacter::OnRep_CharacterStance() {
}

void ASimCharacter::OnRep_CharacterActivityState() {
}

void ASimCharacter::MulticastSpawnMeleeHitEffects_Implementation(FHitNotify SimulatedHitNotify) {
}

void ASimCharacter::MulticastOnUniformMitigatedDamage_Implementation(EDamageType DamageType) {
}

void ASimCharacter::MulticastApplyNonFatalHit_Implementation(const float InStagger) {
}

void ASimCharacter::ClientTraceActivity_Implementation(FActivityStateDebugTrace NewTrace) {
}

void ASimCharacter::ClientSyncStability_Implementation(const float NewStability) {
}

void ASimCharacter::ClientSyncNormalizedStamina_Implementation(float InNormalizedStamina) {
}

void ASimCharacter::ClientSyncActivityStateSequence_Implementation(uint8 CurrentSequenceNumber, int8 HeldItemIndex) {
}

void ASimCharacter::ClientSuppress_Implementation(const float SuppressAmount) {
}

void ASimCharacter::ClientSetItemHolderItems_Implementation(const TArray<FItemInstance>& InItemHolderItems) {
}

void ASimCharacter::ClientSetGainingHeatFromHits_Implementation(bool bIsGaining) {
}

void ASimCharacter::ClientInterruptActivityState_Implementation(uint8 SequenceNumber) {
}

void ASimCharacter::ClientEndWoundedState_Implementation() {
}

void ASimCharacter::ClientCorrectActivityState_Implementation(uint8 LastSuccessfulSequenceNumber, int8 HeldItemIndex, ECharacterActivityState NewState) {
}

void ASimCharacter::ClientCarryWoundedSetupMovement_Implementation(ASimCharacter* WoundedCharacter, bool bBeganCarrying) {
}
bool ASimCharacter::ClientCarryWoundedSetupMovement_Validate(ASimCharacter* WoundedCharacter, bool bBeganCarrying) {
    return true;
}

void ASimCharacter::ClientBeginWoundedState_Implementation(const float WoundedTimeSec, uint8 CurrentSequenceNumber) {
}

void ASimCharacter::ClientAckActivityState_Implementation(uint8 SequenceNumber) {
}

void ASimCharacter::CheckForCover() {
}




void ASimCharacter::AllApplyStagger_Implementation(float StaggerAmount) {
}

void ASimCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimCharacter, MountComponent);
    DOREPLIFETIME(ASimCharacter, CurrentOccupiedStructure);
    DOREPLIFETIME(ASimCharacter, CurrentVehicle);
    DOREPLIFETIME(ASimCharacter, TeamId);
    DOREPLIFETIME(ASimCharacter, VisualCustomizationMask);
    DOREPLIFETIME(ASimCharacter, bIsWearingGasMask);
    DOREPLIFETIME(ASimCharacter, bIsEncumbered);
    DOREPLIFETIME(ASimCharacter, ItemHolderItems);
    DOREPLIFETIME(ASimCharacter, EquipmentItemHolderItems);
    DOREPLIFETIME(ASimCharacter, CharacterStance);
    DOREPLIFETIME(ASimCharacter, CharacterActivityStateInternal);
    DOREPLIFETIME(ASimCharacter, Health);
    DOREPLIFETIME(ASimCharacter, ReplicatedMuddyness);
    DOREPLIFETIME(ASimCharacter, bIsBleeding);
    DOREPLIFETIME(ASimCharacter, ZombieType);
    DOREPLIFETIME(ASimCharacter, WoundedTimeRemaining);
}

ASimCharacter::ASimCharacter() {
    this->StanceYawModifiers[0] = 1.00f;
    this->StanceYawModifiers[1] = 1.00f;
    this->StanceYawModifiers[2] = 1.00f;
    this->StanceYawModifiers[3] = 1.00f;
    this->bGiveStarterKit = false;
    this->BaseTurnRate = 45.00f;
    this->SprintingMaxSpeedModifier = 1.35f;
    this->SprintingStaminaDrainRateModifier = 1.00f;
    this->SprintingStaminaDrainRateModifierCount = 0;
    this->DeathDuration = 180.00f;
    this->ProneEyeHeight = 0.00f;
    this->CrouchedTargetOffset = 25.00f;
    this->MinFallSpeedForDamage = 1000.00f;
    this->FatalFallSpeed = 1600.00f;
    this->MaxClimbForwardDistance = 100.00f;
    this->MaxClimbCosAngle = 0.50f;
    this->MaxVaultHeight = 175.00f;
    this->MinVaultVerticalClearencePercent = 0.70f;
    this->MaxVaultDistance = 250.00f;
    this->MaxClimbHeight = 500.00f;
    this->MinClimbOpenDistance = 175.00f;
    this->MinClimbOntoOpenDistance = 150.00f;
    this->MinShortWallStepOpenDistance = 0.00f;
    this->ClamberStandOffset = 0.00f;
    this->MountComponent = NULL;
    this->CurrentOccupiedStructure = NULL;
    this->CurrentVehicle = NULL;
    this->CurrentMountedVehicle = NULL;
    this->FootStepCue = NULL;
    this->MaxHealth = 0;
    this->HealthThresholdForHurtMaterial = 0.75f;
    this->MaxActivityLatencyCompensation = 0.50f;
    this->AllowedDeviationOfShootingDirection = 30.00f;
    this->InVehicleAllowedDeviationOfShootingDirection = 90.00f;
    this->WeaponFiringConeAbilityModifierPct = 0.00f;
    this->TeamId = 255;
    this->VisualCustomizationMask = 255;
    this->bIsWearingGasMask = false;
    this->bIgnoreStanceInput = false;
    this->bUsesDynamicMaterials = true;
    this->bIsEncumbered = false;
    this->CurrentSurfaceType = SurfaceType_Default;
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->EquippedItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->GasMaskMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GasMaskMesh"));
    this->AccessoryMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AccessoryMesh"));
    this->Muzzle_Standing = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle_Standing"));
    this->Muzzle_Crouched = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle_Crouched"));
    this->Muzzle_Prone = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle_Prone"));
    this->GroundEquippedItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GroundEquippedItemMesh"));
    this->ItemHolder = CreateDefaultSubobject<UItemHolderComponent>(TEXT("ItemHolder"));
    this->SuppressionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SuppressionSphere"));
    this->EquipmentItemHolder = CreateDefaultSubobject<UEquipmentHolderComponent>(TEXT("EquipmentItemHolder"));
    this->EquipmentItemHolderItems.AddDefaulted(8);
    this->SwimmingPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SwimmingPS"));
    this->EnterWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EnterWaterPS"));
    this->SwimmingSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("SwimmingSFX"));
    this->EnterWaterSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("EnterWaterSFX"));
    this->CharacterStance = ESimCharacterStance::Standing;
    this->CharacterActivityStateInternal = ECharacterActivityState::Idle;
    this->Health = 0.00f;
    this->Muddyness = 0.00f;
    this->ReplicatedMuddyness = 0;
    this->LastMovementBase = NULL;
    this->MeleeMinDamage = 40.00f;
    this->MeleeMaxDamage = 60.00f;
    this->MeleeDamageType = NULL;
    this->MeleeImpactEffect = NULL;
    this->MeleeAttackSound = NULL;
    this->SwimmingBuoyancy = 1.00f;
    this->DrowningBuoyancy = 0.00f;
    this->SwimmingStaminaDrainRate = 10.00f;
    this->SwimmingStaminaDrainDepthCutoff = 0.70f;
    this->ClimbingDepthCutoff = 1.00f;
    this->RagdollInWaterLinearDamping = 10000000.00f;
    this->RagdollOutOfWaterLinearDamping = 0.10f;
    this->StabilityMovementDecayRate = 0.00f;
    this->StabilityDecayMovementSpeed = 0.00f;
    this->StabilityYawDecayRate = 0.00f;
    this->StabilityYawDecayTime = 0.00f;
    this->StabilityGainRates[0] = 0.00f;
    this->StabilityGainRates[1] = 0.00f;
    this->StabilityGainRates[2] = 0.00f;
    this->StabilityGainRates[3] = 0.00f;
    this->HealTimer = 0.00f;
    this->BleedingEnabled = false;
    this->BleedDamagePerSecond = 10.00f;
    this->BleedMinDamageReq = 25.00f;
    this->StaggerMinDamageReq = 25.00f;
    this->BleedingEffectTemplate = NULL;
    this->SpawnedBleedingEffect = NULL;
    this->bIsBleeding = false;
    this->ZombieType = EZombieType::None;
    this->WoundedTimeRemaining = 0.00f;
    this->ZombieMeleeReach = 0.00f;
    this->ZombieMeleeImpactEffect = NULL;
    this->ZombieDeathSound = NULL;
    this->ZombieHitRadius = 0.00f;
    this->ZombieHitHalfHeight = 0.00f;
    this->CarryingPlayer = NULL;
}

