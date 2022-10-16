#include "Hospital.h"
#include "Net/UnrealNetwork.h"

void AHospital::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHospital, RecoveryProgressList);
}

AHospital::AHospital() {
    this->NumBeds = 6;
    this->PatientConversionSeconds = 600.00f;
}

