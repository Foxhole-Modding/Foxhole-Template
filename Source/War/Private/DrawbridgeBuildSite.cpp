#include "DrawbridgeBuildSite.h"
#include "PersistentProxyComponent.h"

ADrawbridgeBuildSite::ADrawbridgeBuildSite() {
    this->SideAProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideAProxy"));
    this->SideBProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideBProxy"));
}

