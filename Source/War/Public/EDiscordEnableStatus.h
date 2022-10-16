#pragma once
#include "CoreMinimal.h"
#include "EDiscordEnableStatus.generated.h"

UENUM(BlueprintType)
enum class EDiscordEnableStatus : uint8 {
    PostToFOD,
    PostToTestServer,
    Off,
};

