#include "FoxholeTurret.h"
#include "Net/UnrealNetwork.h"
#include "Components/ArrowComponent.h"
#include "OccupiableComponent.h"
#include "TeamFlagMeshComponent.h"

void AFoxholeTurret::OnRep_SimulatedHitNotify() {
}

void AFoxholeTurret::OnRep_IsEnemyObscured() {
}

void AFoxholeTurret::OnRep_CurrentEnemy() {
}

void AFoxholeTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFoxholeTurret, CurrentEnemy);
    DOREPLIFETIME(AFoxholeTurret, SimulatedHitNotify);
    DOREPLIFETIME(AFoxholeTurret, bIsEnemyObscured);
    DOREPLIFETIME(AFoxholeTurret, SuppressionPercentage);
}

AFoxholeTurret::AFoxholeTurret() {
    this->OccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("OccupyComponent"));
    this->ImpactEffect = NULL;
    this->WeaponFireFXClass = NULL;
    this->ShotSoundCue = NULL;
    this->ShotSoundATCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->WeaponDamage = 0.00f;
    this->WeaponDamageAT = 50.00f;
    this->MaximumRange = 0.00f;
    this->MaximumReachability = 4000.00f;
    this->MaximumRangeInAggroState = 0.00f;
    this->BestJitterConeHalfAngle = 0.00f;
    this->WorstJitterConeHalfAngle = 0.00f;
    this->FiringPeriod = 0.00f;
    this->TimeToFullFireRateAndAccuracy = 0.00f;
    this->EnemyPursueDuration = 0.00f;
    this->ShouldAggroOnDamage = false;
    this->AllowedTargetTypes = 31;
    this->bIgnoreLineOfSight = false;
    this->bReduceRangeAtNight = true;
    this->MuzzleFlashLocationComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleFxLocationComponent"));
    this->bIsMuzzleFlashStationary = false;
    this->FiringConeAngle = 0.00f;
    this->EnemyType = ECC_Pawn;
    this->TimeToStarvation = 600.00f;
    this->bLimitOccupantFiringArc = false;
    this->MaxOccupantFiringArcDeviation = 0.00f;
    this->bIsEnemyObscured = false;
    this->SuppressionPercentage = 0;
    this->AttackDelayForATDamage = 1.00f;
    this->bUseATDamageForVehicle = false;
    this->bIsSuppressible = true;
    this->bShowExtraTracers = false;
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
}

