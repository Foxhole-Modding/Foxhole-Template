#include "Refinery.h"
#include "Net/UnrealNetwork.h"
#include "GenericItemStockpileComponent.h"
#include "Components/BoxComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "Components/SceneComponent.h"

bool ARefinery::IsRefining() const {
    return false;
}

void ARefinery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARefinery, bIsRefining);
}

ARefinery::ARefinery() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->DrivewayFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DrivewayFootprint"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->bIsRefining = false;
}

