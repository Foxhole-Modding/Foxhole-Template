#include "SeaportBuildSite.h"
#include "CraneSpawnLocationComponent.h"
#include "PersistentProxyComponent.h"

ASeaportBuildSite::ASeaportBuildSite() {
    this->CraneSpawnLocationComponent2 = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent2"));
    this->ProxyLoadingDockComponent = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("ProxyLoadingDockComponent"));
}

