#include "PersistentProxy.h"
#include "Components/StaticMeshComponent.h"

APersistentProxy::APersistentProxy() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

