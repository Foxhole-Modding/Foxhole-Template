#include "Seaport.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "PersistentProxyComponent.h"
#include "TeamFlagMeshComponent.h"

ASeaport::ASeaport() {
    this->LandLoadingArea2 = CreateDefaultSubobject<UBoxComponent>(TEXT("LandLoadingArea2"));
    this->WaterLoadingArea1 = CreateDefaultSubobject<UBoxComponent>(TEXT("WaterLoadingArea1"));
    this->WaterLoadingArea2 = CreateDefaultSubobject<UBoxComponent>(TEXT("WaterLoadingArea2"));
    this->TransferLocation2 = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation2"));
    this->CraneSpawnLocationComponent2 = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent2"));
    this->ProxyLoadingDockComponent = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("ProxyLoadingDockComponent"));
    this->PassengerUnloadingArea1 = CreateDefaultSubobject<UBoxComponent>(TEXT("PassengerUnloadingArea1"));
    this->PassengerUnloadingArea2 = CreateDefaultSubobject<UBoxComponent>(TEXT("PassengerUnloadingArea2"));
    this->LadderLocationSeaport1 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationSeaport1"));
    this->LadderLocationSeaport2 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationSeaport2"));
    this->LadderLocationDock1 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationDock1"));
    this->LadderLocationDock2 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationDock2"));
    this->LadderType = NULL;
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
}

