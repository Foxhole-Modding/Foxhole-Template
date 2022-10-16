#include "BuildGhost.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

ABuildGhost::ABuildGhost() {
    this->ManualConnectorSocket = NULL;
    this->MainSplineConnector = NULL;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("StructureArrow"));
    this->BuildFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BuildFootprint"));
    this->MapBoundaryBuildRule = EMapBoundaryBuildRule::NotBuildableNearBorder;
    this->bIsConnector = false;
    this->bIsDeployed = false;
    this->bIsBuiltOnBridges = false;
    this->bIsBuiltOnWater = false;
    this->bAllowFloating = false;
    this->bLinearAttachment = false;
    this->MaxAttachmentGroupSize = 0;
    this->LinearAttachmentTolerance = 10.00f;
    this->LineOfSightVisualizationActor = NULL;
    this->UpgradeStructure = NULL;
}

