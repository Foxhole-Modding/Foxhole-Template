#include "AITurretComponent.h"
#include "Net/UnrealNetwork.h"

void UAITurretComponent::OnRep_SimulatedHitNotify() {
}

void UAITurretComponent::OnRep_IsEnemyObscured() {
}

void UAITurretComponent::OnRep_CurrentEnemy() {
}

void UAITurretComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAITurretComponent, CurrentEnemy);
    DOREPLIFETIME(UAITurretComponent, SimulatedHitNotify);
    DOREPLIFETIME(UAITurretComponent, bIsEnemyObscured);
}

UAITurretComponent::UAITurretComponent() {
    this->MaximumRange = 0.00f;
    this->MaximumReachability = 4000.00f;
    this->bIs360ViewWhenMounted = false;
    this->ImpactEffect = NULL;
    this->WeaponFireFXClass = NULL;
    this->ShotSoundCue = NULL;
    this->ShotAgainstVehicleSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->WeaponDamage = 0.00f;
    this->WeaponDamageAgainstVehicles = 75.00f;
    this->BestJitterConeHalfAngle = 0.00f;
    this->WorstJitterConeHalfAngle = 0.00f;
    this->FiringPeriod = 0.00f;
    this->AttackDelayAgainstVehicles = 1.00f;
    this->TimeToFullFireRateAndAccuracy = 0.00f;
    this->EnemyPursueDuration = 0.00f;
    this->bIsMuzzleFlashStationary = false;
    this->FiringConeAngle = 0.00f;
    this->EnemyType = ECC_Pawn;
    this->bIsEnemyObscured = false;
}

