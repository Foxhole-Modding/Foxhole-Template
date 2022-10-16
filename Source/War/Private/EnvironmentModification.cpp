#include "EnvironmentModification.h"
#include "Net/UnrealNetwork.h"

void AEnvironmentModification::ProcessDevastationHeatmapReplication(const TArray<uint8>& OldDevastationHeatmap) {
}

void AEnvironmentModification::OnRep_Seed() {
}

void AEnvironmentModification::OnRep_DevastationHeatmap(const TArray<uint8>& OldDevastationHeatmap) {
}

void AEnvironmentModification::OnRep_CreationTime(const float& OldCreationTime) {
}

void AEnvironmentModification::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnvironmentModification, Seed);
    DOREPLIFETIME(AEnvironmentModification, DevastationHeatmap);
    DOREPLIFETIME(AEnvironmentModification, CreationTime);
}

AEnvironmentModification::AEnvironmentModification() {
    this->ImpactMap.AddDefaulted(1024);
    this->Seed = 0;
    this->DevastationHeatmap.AddDefaulted(512);
    this->bFirstReplicationOfDevastationHeatmap = true;
    this->CreationTime = 0.00f;
}

