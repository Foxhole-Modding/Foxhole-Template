#pragma once
#include "CoreMinimal.h"
#include "TTSDestination.generated.h"

UENUM(BlueprintType)
enum class TTSDestination : uint8 {
    Default,
    RemoteTransmission = 0x0,
    LocalPlayback,
    RemoteTransmissionWithLocalPlayback,
    QueuedRemoteTransmission,
    QueuedLocalPlayback,
    QueuedRemoteTransmissionWithLocalPlayback,
    ScreenReader,
};

