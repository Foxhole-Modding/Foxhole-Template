#pragma once
#include "CoreMinimal.h"
#include "EWarServerType.generated.h"

UENUM()
enum class EWarServerType : int32 {
    Skirmish,
    WorldConquest,
    Event = 0x3,
    Training,
    HomeRegionC,
    HomeRegionW,
};

