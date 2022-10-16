#include "FuelSilo.h"
#include "Net/UnrealNetwork.h"
#include "BuildSocketComponent.h"

void AFuelSilo::OnRep_LiquidTank() {
}

void AFuelSilo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelSilo, LiquidTank);
}

AFuelSilo::AFuelSilo() {
    this->PipeInput0 = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PipeInput0"));
    this->PipeOutput0 = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PipeOutput0"));
}

