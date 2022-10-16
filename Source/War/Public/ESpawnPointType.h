#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointType.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointType : uint8 {
    None,
    Campsite,
    Outpost,
    FrontierBase,
    TownHall,
    Keep,
    ForwardBase1,
    ForwardBase2,
    ForwardBase3,
    StaticBase1,
    StaticBase2,
    StaticBase3,
    Unused,
    LandingShipBase,
    Unknown,
    BuildSite,
    GarrisonStation,
    Fort,
    RelicBase,
    BunkerBase,
    BorderBase,
    TownBase,
    Count,
};

