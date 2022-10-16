#include "FacilityRefinery.h"
#include "Net/UnrealNetwork.h"
#include "GenericStockpileComponent.h"
#include "ModificationSlotComponent.h"
#include "BuildSocketComponent.h"
#include "FacilityLightComponent.h"

void AFacilityRefinery::OnRep_State() {
}

void AFacilityRefinery::OnRep_PowerGridInfo() {
}

void AFacilityRefinery::OnRep_ConversionInfoIndex() {
}

void AFacilityRefinery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityRefinery, FuelTanks);
    DOREPLIFETIME(AFacilityRefinery, PowerGridInfo);
    DOREPLIFETIME(AFacilityRefinery, ConversionInfoIndex);
    DOREPLIFETIME(AFacilityRefinery, State);
}

AFacilityRefinery::AFacilityRefinery() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->UpgradeSlotComponent = CreateDefaultSubobject<UModificationSlotComponent>(TEXT("UpgradeSlotComponent"));
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->ConversionInfoIndex = 0;
    this->State = EFacilityRefineryState::Idle;
    this->bHasConsumedMaterials = false;
    this->SavedProgress = 0.00f;
    this->ItemInputBuffer = 0;
}

