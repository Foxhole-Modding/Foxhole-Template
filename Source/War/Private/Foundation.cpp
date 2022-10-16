#include "Foundation.h"
#include "Net/UnrealNetwork.h"

void AFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFoundation, ConcreteSettler);
}

AFoundation::AFoundation() {
}

