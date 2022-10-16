#pragma once
#include "CoreMinimal.h"
#include "EWindowState.generated.h"

UENUM(BlueprintType)
enum class EWindowState : uint8 {
    Built,
    Disconnected,
    Starved,
    MAX,
};

