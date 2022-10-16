#include "AssemblyStation.h"
#include "Net/UnrealNetwork.h"
#include "GenericStockpileComponent.h"
#include "ModificationSlotComponent.h"
#include "BuildSocketComponent.h"
#include "FacilityLightComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

void AAssemblyStation::OnRep_PowerGridInfo() {
}

void AAssemblyStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAssemblyStation, FuelTanks);
    DOREPLIFETIME(AAssemblyStation, PowerGridInfo);
    DOREPLIFETIME(AAssemblyStation, BuildSite);
}

AAssemblyStation::AAssemblyStation() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->UpgradeSlotComponent = CreateDefaultSubobject<UModificationSlotComponent>(TEXT("UpgradeSlotComponent"));
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->GarageFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GarageFootprint"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->bHasParkingSpot = false;
    this->bAllowsTierUpgrades = false;
    this->bSupportsExtraLargeShippables = false;
    this->UpgradeCostMultiplier = 1.00f;
}

