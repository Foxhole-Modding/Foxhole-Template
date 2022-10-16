#pragma once
#include "CoreMinimal.h"
#include "EMainMenuPromptType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuPromptType : uint8 {
    None,
    Update,
    Rejoin,
    RejoinResistance,
    WaitForRestart,
    WaitForRestartUpgrade,
    VipMode,
};

