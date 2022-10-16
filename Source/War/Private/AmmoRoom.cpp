#include "AmmoRoom.h"
#include "Net/UnrealNetwork.h"
#include "ReplicatedGenericStockpileComponent.h"

void AAmmoRoom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmmoRoom, RequiredSquadMembers);
    DOREPLIFETIME(AAmmoRoom, SquadId);
}

AAmmoRoom::AAmmoRoom() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->RequiredSquadMembers = 3;
    this->SquadId = 0;
}

