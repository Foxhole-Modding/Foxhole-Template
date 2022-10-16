#pragma once
#include "CoreMinimal.h"
#include "ETunnelConnectionState.generated.h"

UENUM(BlueprintType)
enum class ETunnelConnectionState : uint8 {
    Disconnected,
    DisconnectedStarved,
    Connected,
};

