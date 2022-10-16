#include "FortObservation.h"
#include "Net/UnrealNetwork.h"
#include "MapIntelligenceSourceComponent.h"
#include "TeamFlagMeshComponent.h"

void AFortObservation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortObservation, PowerInfo);
}

AFortObservation::AFortObservation() {
    this->MapIntelligenceSource = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSourceComponent"));
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
}

