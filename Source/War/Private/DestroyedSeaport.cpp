#include "DestroyedSeaport.h"
#include "CraneSpawnLocationComponent.h"
#include "PersistentProxyComponent.h"

ADestroyedSeaport::ADestroyedSeaport() {
    this->CraneSpawnLocationComponent2 = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent2"));
    this->ProxyLoadingDockComponent = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("ProxyLoadingDockComponent"));
}

