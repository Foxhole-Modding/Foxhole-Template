#pragma once
#include "CoreMinimal.h"
#include "EBuildSocketType.generated.h"

UENUM(BlueprintType)
enum class EBuildSocketType : uint8 {
    Sandbag,
    Trench,
    Fort,
    FortFoundation,
    FortModification,
    EmplacementFoundation,
    TrenchSide,
    Tripod,
    TripodMount,
    Wall,
    TrenchConnector,
    Pipeline,
    BarbedWire,
    FieldBridge,
    PipelineStructure,
    RailwayTrack,
    Foundation,
    PowerLine,
    PowerPole,
    RailwayTrackPath,
    PowerStructure,
    RailwayTrackSmall,
    RailwayTrackSmallPath,
    RailwayTrackCrane,
    PipelineValve,
    CatwalkBridge,
    CatwalkPlatform,
    RailwayTrackCranePath,
    PipelineOverhead,
    BuildableRoad,
    BuildableRoadPath,
};

