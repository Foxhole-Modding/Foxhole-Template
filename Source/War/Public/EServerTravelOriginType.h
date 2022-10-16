#pragma once
#include "CoreMinimal.h"
#include "EServerTravelOriginType.generated.h"

UENUM()
enum class EServerTravelOriginType : int32 {
    Client,
    HomeRegion,
    WarServer,
    Invalid,
};

