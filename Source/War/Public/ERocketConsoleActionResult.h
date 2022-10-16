#pragma once
#include "CoreMinimal.h"
#include "ERocketConsoleActionResult.generated.h"

UENUM(BlueprintType)
enum class ERocketConsoleActionResult : uint8 {
    Success,
    Error,
    Failure,
    InWrongSquad,
    NotInSquad,
    NotEnoughSquadMembers,
    InvalidCode,
    InvalidFormat,
    CodeMismatch,
    NotEnoughFuel,
};

