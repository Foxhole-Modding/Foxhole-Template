#pragma once
#include "CoreMinimal.h"
#include "EItemProfileType.generated.h"

UENUM(BlueprintType)
enum class EItemProfileType : uint8 {
    Invalid,
    RawResource,
    UnstackableRawResource,
    RefinedResourceFastRetrieve,
    RefinedResource,
    OnSiteResources,
    RefinedFuel,
    Throwable,
    HandheldWeapon,
    LightAmmo,
    HeavyAmmo,
    LargeItemAmmo,
    Supplies,
    Accessory,
    Tool,
    StackableTool,
    UniqueItem,
    Uniform,
    LargeResource,
    LiquidAmmo,
    Count,
};

