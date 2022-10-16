#include "DestroyedDrawbridge.h"
#include "PersistentProxyComponent.h"

ADestroyedDrawbridge::ADestroyedDrawbridge() {
    this->SideAProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideAProxy"));
    this->SideBProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideBProxy"));
}

