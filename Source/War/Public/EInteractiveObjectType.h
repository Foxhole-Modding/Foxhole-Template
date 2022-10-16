#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectType.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectType : uint8 {
    ItemPickup,
    LargeItemPickup,
    BuildableStructure,
    DestroyedStructure,
    StructureBuildSite,
    Vehicle,
    UseComponent,
    TravelBorder,
    Ladder,
    Character,
    Invalid,
};

