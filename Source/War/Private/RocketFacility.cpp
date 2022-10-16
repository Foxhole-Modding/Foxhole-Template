#include "RocketFacility.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"

void ARocketFacility::OnRep_RemainingTimeToLaunch() {
}

void ARocketFacility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARocketFacility, SquadId);
    DOREPLIFETIME(ARocketFacility, RequiredSquadMembers);
    DOREPLIFETIME(ARocketFacility, SelectedCodeEntryCount);
    DOREPLIFETIME(ARocketFacility, TargetRegion);
    DOREPLIFETIME(ARocketFacility, Coordinate);
    DOREPLIFETIME(ARocketFacility, FuelTank);
    DOREPLIFETIME(ARocketFacility, RemainingTimeToLaunch);
}

ARocketFacility::ARocketFacility() {
    this->BuildLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("Build Location"));
    this->Sequence = ERocketLaunchSequence::Idle;
    this->SquadId = 0;
    this->RequiredSquadMembers = 10;
    this->SelectedCodeEntryCount = 0;
    this->TargetRegion = EWorldConquestMapId::Invalid;
    this->RemainingTimeToLaunch = -1.00f;
}

