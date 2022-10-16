#include "BuiltRoad.h"
#include "BuildSocketComponent.h"
#include "SplineConnectorComponent.h"

ABuiltRoad::ABuiltRoad() {
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->GrassCullRadius = 0.00f;
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
}

