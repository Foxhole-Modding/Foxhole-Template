#pragma once
#include "CoreMinimal.h"
#include "EActivityStateDebugTraceType.generated.h"

UENUM(BlueprintType)
enum class EActivityStateDebugTraceType : uint8 {
    None,
    Start,
    Finished,
    StartFail,
    StartRewound,
    Correction,
    Dropped,
    Ack,
    Interrupt,
};

