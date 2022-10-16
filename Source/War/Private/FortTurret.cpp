#include "FortTurret.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"

void AFortTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTurret, PowerInfo);
}

AFortTurret::AFortTurret() {
    this->OccupiableTriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OccupiableTriggerVolume"));
}

