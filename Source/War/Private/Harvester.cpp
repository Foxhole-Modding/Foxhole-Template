#include "Harvester.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"

class AResource;

void AHarvester::ServerStopAction_Implementation() {
}
bool AHarvester::ServerStopAction_Validate() {
    return true;
}

void AHarvester::ServerStartGrinding_Implementation() {
}
bool AHarvester::ServerStartGrinding_Validate() {
    return true;
}

void AHarvester::OnRep_Action() {
}

void AHarvester::MulticastOnResourceSplit_Implementation() {
}

void AHarvester::MulticastOnGather_Implementation(AResource* Resource, const FGatherResult& GatherResult) {
}

void AHarvester::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHarvester, Action);
}

AHarvester::AHarvester() {
    this->GrindRate = 0.00f;
    this->GrindFuelRate = 0.00f;
    this->SplitRate = 0.00f;
    this->SplitFuelRate = 0.00f;
    this->MovementModifier = 1.00f;
    this->GrindingCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GrindingCapsule"));
    this->NoTargetParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("NoTargetParticleSystem"));
    this->ComponentsParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ComponentsParticleSystem"));
    this->DefensesParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DefensesParticleSystem"));
    this->SalvageParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SalvageParticleSystem"));
    this->SulfurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SulfurParticleSystem"));
    this->SplitParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SplitParticleSystem"));
    this->GrindingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("GrindingSFXLoop"));
    this->SplittingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("SplittingSFXLoop"));
    this->RotatingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("RotatingSFXLoop"));
    this->Action = 0;
}

