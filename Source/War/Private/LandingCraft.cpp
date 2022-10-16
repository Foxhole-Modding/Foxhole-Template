#include "LandingCraft.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"

bool ALandingCraft::GetBackHatchOpen() const {
    return false;
}

void ALandingCraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALandingCraft, bBackHatchOpen);
}

ALandingCraft::ALandingCraft() {
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bBackHatchOpen = false;
    this->StashedAmmo = 0;
}

