#pragma once
#include "CoreMinimal.h"
#include "EMapTeamId.generated.h"

UENUM(BlueprintType)
enum class EMapTeamId : uint8 {
    Colonial,
    Warden,
    None,
    Count,
};

