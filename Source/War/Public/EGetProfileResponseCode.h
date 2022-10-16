#pragma once
#include "CoreMinimal.h"
#include "EGetProfileResponseCode.generated.h"

UENUM()
enum class EGetProfileResponseCode : int8 {
    Success,
    NoProfile,
    Error,
};

