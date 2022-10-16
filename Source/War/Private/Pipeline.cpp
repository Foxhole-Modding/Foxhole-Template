#include "Pipeline.h"
#include "BuildSocketComponent.h"
#include "SplineConnectorComponent.h"

APipeline::APipeline() {
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->LeftSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("LeftSocket"));
    this->RightSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("RightSocket"));
}

