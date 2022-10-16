#include "Base.h"
#include "Net/UnrealNetwork.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"
#include "Components/AudioComponent.h"

void ABase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABase, DecayInfo);
}

ABase::ABase() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->SirenLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("SirenLoop"));
    this->SpawnPointType = ESpawnPointType::None;
    this->GarrisonLevel = 0;
    this->BaseTunnelConnectionRange = 10000;
}

