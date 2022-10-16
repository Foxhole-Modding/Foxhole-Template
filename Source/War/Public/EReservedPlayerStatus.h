#pragma once
#include "CoreMinimal.h"
#include "EReservedPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EReservedPlayerStatus : uint8 {
    Reserved,
    ReservedButServerIsFull,
    NotReserved,
};

