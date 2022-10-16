#pragma once
#include "CoreMinimal.h"
#include "EWarPhase.generated.h"

UENUM(BlueprintType)
enum class EWarPhase : uint8 {
    PreConquest,
    Conquest,
    Victory,
    Resistance,
    Completed,
};

