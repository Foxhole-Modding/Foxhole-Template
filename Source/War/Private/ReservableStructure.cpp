#include "ReservableStructure.h"
#include "Net/UnrealNetwork.h"

void AReservableStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReservableStructure, bIsReservable);
}

AReservableStructure::AReservableStructure() {
    this->bIsReservable = false;
}

