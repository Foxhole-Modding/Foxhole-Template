#pragma once
#include "CoreMinimal.h"
#include "EFactionId.generated.h"

UENUM(BlueprintType)
enum class EFactionId : uint8 {
    Colonials,
    Wardens,
    NumFactions,
    NoTeam = 0xFF,
};

