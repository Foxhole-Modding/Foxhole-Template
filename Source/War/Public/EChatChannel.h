#pragma once
#include "CoreMinimal.h"
#include "EChatChannel.generated.h"

UENUM(BlueprintType)
enum class EChatChannel : uint8 {
    Default,
    RegionTeam,
    WorldTeam,
    Logistics,
    Intel,
    LocalAll,
    Squad,
    Regiment,
    Whisper,
    Admin,
    MAX,
};

