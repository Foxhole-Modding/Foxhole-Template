#include "StructureBuildSite.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"

void AStructureBuildSite::OnRep_IsUpgrade() {
}

void AStructureBuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStructureBuildSite, StructureBeingBuiltCodeName);
    DOREPLIFETIME(AStructureBuildSite, ModificationMask);
    DOREPLIFETIME(AStructureBuildSite, bBaseStructureHadPipes);
    DOREPLIFETIME(AStructureBuildSite, ModificationSlotMigrations);
    DOREPLIFETIME(AStructureBuildSite, DisabledSockets);
    DOREPLIFETIME(AStructureBuildSite, bIsUpgrade);
    DOREPLIFETIME(AStructureBuildSite, ConnectorConfiguration);
}

AStructureBuildSite::AStructureBuildSite() {
    this->ModificationMask = 0;
    this->bBaseStructureHadPipes = false;
    this->ObstructionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ObstructionCheckVolume"));
    this->bIsUpgrade = false;
    this->BaseStructureClassToRespawn = NULL;
    this->BaseStructureHealth = 0;
    this->BaseStructureTeamId = 255;
    this->bHasSavedRotation = false;
    this->DecayStartHours = 0.00f;
    this->DecayDurationHours = 0.00f;
}

