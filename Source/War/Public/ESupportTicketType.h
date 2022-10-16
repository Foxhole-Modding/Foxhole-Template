#pragma once
#include "CoreMinimal.h"
#include "ESupportTicketType.generated.h"

UENUM(BlueprintType)
enum class ESupportTicketType : uint8 {
    ShardConnectionError,
    RegionConnectionError,
    RegionLag,
    ShardConnectionAutoError,
    RegionConnectionAutoError,
    None,
};

