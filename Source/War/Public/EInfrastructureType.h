#pragma once
#include "CoreMinimal.h"
#include "EInfrastructureType.generated.h"

UENUM(BlueprintType)
enum class EInfrastructureType : uint8 {
    None,
    Garrison,
    Command,
    Base,
    Town,
    GarrisonStation,
    Count,
};

