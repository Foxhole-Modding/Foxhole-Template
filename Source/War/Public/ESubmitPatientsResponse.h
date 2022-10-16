#pragma once
#include "CoreMinimal.h"
#include "ESubmitPatientsResponse.generated.h"

UENUM(BlueprintType)
enum class ESubmitPatientsResponse : uint8 {
    Success,
    AtCapacity,
    NoCriticalSoldiersInInventory,
    Error,
};

