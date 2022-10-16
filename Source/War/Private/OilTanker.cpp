#include "OilTanker.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"

void AOilTanker::OnRep_FuelTankerInfo() {
}

void AOilTanker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOilTanker, FuelTankerInfo);
}

AOilTanker::AOilTanker() {
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
}

