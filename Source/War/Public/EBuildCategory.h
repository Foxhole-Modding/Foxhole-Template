#pragma once
#include "CoreMinimal.h"
#include "EBuildCategory.generated.h"

UENUM(BlueprintType)
enum class EBuildCategory : uint8 {
    Defense,
    Bunker,
    Default,
    Facility,
    Mining,
    Power,
    Foundation,
    MAX,
};

