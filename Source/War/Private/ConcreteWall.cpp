#include "ConcreteWall.h"
#include "Net/UnrealNetwork.h"

void AConcreteWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteWall, ConcreteSettler);
}

AConcreteWall::AConcreteWall() {
}

