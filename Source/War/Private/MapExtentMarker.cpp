#include "MapExtentMarker.h"
#include "Components/SceneComponent.h"

AMapExtentMarker::AMapExtentMarker() {
    this->Location = EMapExtentMarkerLocation::TopLeft;
    this->MarkerScene = CreateDefaultSubobject<USceneComponent>(TEXT("MapMarkerScene"));
}

