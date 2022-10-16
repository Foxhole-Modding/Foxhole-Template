#pragma once
#include "CoreMinimal.h"
#include "ERegimentQueryType.generated.h"

UENUM()
enum class ERegimentQueryType : int8 {
    PlayerOnlineId,
    RegimentName,
    RegimentTag,
    RegimentId,
};

