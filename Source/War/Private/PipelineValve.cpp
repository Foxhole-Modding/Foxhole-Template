#include "PipelineValve.h"
#include "Net/UnrealNetwork.h"
#include "BuildSocketComponent.h"

void APipelineValve::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineValve, ThroughputNormalized);
}

APipelineValve::APipelineValve() {
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->ThroughputNormalized = 0.00f;
}

