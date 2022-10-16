#pragma once
#include "CoreMinimal.h"
#include "EConnectorConfigurationFlag.generated.h"

UENUM(BlueprintType)
enum class EConnectorConfigurationFlag : uint8 {
    None,
    OverridePathModeToBiarc,
};

