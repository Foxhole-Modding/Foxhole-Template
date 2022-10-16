#include "PowerPole.h"
#include "Net/UnrealNetwork.h"
#include "BuildSocketComponent.h"
#include "FacilityLightComponent.h"

void APowerPole::OnRep_PowerGridInfo() {
}

void APowerPole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerPole, PowerGridInfo);
}

APowerPole::APowerPole() {
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->CableMaterial = NULL;
}

