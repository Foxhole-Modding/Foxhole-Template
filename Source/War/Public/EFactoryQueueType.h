#pragma once
#include "CoreMinimal.h"
#include "EFactoryQueueType.generated.h"

UENUM(BlueprintType)
enum class EFactoryQueueType : uint8 {
    None,
    SmallArms,
    HeavyArms,
    HeavyAmmo,
    Utility,
    Medical,
    Supplies,
    Resources,
    Uniforms,
    Vehicles,
    Structures,
    Count,
};

