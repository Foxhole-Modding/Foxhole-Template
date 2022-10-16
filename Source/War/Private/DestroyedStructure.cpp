#include "DestroyedStructure.h"
#include "Net/UnrealNetwork.h"

void ADestroyedStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADestroyedStructure, bIsScorched);
}

ADestroyedStructure::ADestroyedStructure() {
    this->bIsScorchable = true;
    this->bIsScorched = false;
}

