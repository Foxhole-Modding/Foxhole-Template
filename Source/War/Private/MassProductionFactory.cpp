#include "MassProductionFactory.h"
#include "CraneSpawnLocationComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

void AMassProductionFactory::MulticastPlayShippableCrateFX_Implementation() {
}

AMassProductionFactory::AMassProductionFactory() {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->TransferLocationFootprint = CreateDefaultSubobject<UBoxComponent>(TEXT("TransferLocationFootprint"));
    this->ShippableCrateSound = NULL;
    this->ShippableCratePS = NULL;
}

