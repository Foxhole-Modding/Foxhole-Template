#include "StorageFacility.h"
#include "AITurretsControllerComponent.h"
#include "GenericStockpileComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "ReserveStockpileComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AStorageFacility::AStorageFacility() {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ReserveStockpileComponent = CreateDefaultSubobject<UReserveStockpileComponent>(TEXT("ReserveStockpileComponent"));
    this->DrivewayFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DrivewayFootprint"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
}

