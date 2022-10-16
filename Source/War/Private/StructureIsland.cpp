#include "StructureIsland.h"
#include "Net/UnrealNetwork.h"

void AStructureIsland::OnRep_Structures() {
}

void AStructureIsland::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStructureIsland, Structures);
    DOREPLIFETIME(AStructureIsland, StructuralIntegrity);
    DOREPLIFETIME(AStructureIsland, TeamId);
    DOREPLIFETIME(AStructureIsland, FireIntensity);
}

AStructureIsland::AStructureIsland() {
    this->StructuralIntegrity = 0.00f;
    this->TeamId = 0;
    this->HealthPool = 0.00f;
    this->HealthPoolMax = 0.00f;
    this->FireIntensity = EFireIntensity::None;
}

