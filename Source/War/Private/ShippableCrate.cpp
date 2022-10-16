#include "ShippableCrate.h"
#include "Net/UnrealNetwork.h"

void AShippableCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShippableCrate, StoredCodeName);
}

AShippableCrate::AShippableCrate() {
    this->ShippableMesh = NULL;
}

