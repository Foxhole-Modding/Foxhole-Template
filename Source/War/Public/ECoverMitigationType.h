#pragma once
#include "CoreMinimal.h"
#include "ECoverMitigationType.generated.h"

UENUM(BlueprintType)
enum class ECoverMitigationType : uint8 {
    Default,
    Assault,
    Carbine,
    Rifle,
    Sniper,
};

