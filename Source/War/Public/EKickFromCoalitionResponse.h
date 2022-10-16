#pragma once
#include "CoreMinimal.h"
#include "EKickFromCoalitionResponse.generated.h"

UENUM(BlueprintType)
enum class EKickFromCoalitionResponse : uint8 {
    Success,
    IsOfficer,
    NotFound,
    NumTypes,
};

