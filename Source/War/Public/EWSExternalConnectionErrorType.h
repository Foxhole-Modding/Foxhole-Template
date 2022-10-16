#pragma once
#include "CoreMinimal.h"
#include "EWSExternalConnectionErrorType.generated.h"

UENUM(BlueprintType)
enum class EWSExternalConnectionErrorType : uint8 {
    ConnectionFailed,
    AuthenticationFailed,
};

