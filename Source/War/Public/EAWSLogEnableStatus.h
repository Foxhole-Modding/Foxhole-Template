#pragma once
#include "CoreMinimal.h"
#include "EAWSLogEnableStatus.generated.h"

UENUM(BlueprintType)
enum class EAWSLogEnableStatus : uint8 {
    Live,
    Dev,
    Off,
};

