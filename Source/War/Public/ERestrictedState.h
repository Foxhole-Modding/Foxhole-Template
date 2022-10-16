#pragma once
#include "CoreMinimal.h"
#include "ERestrictedState.generated.h"

UENUM(BlueprintType)
enum class ERestrictedState : uint8 {
    None,
    WeaponUsage,
    Build,
    Chat = 0x4,
    Voice = 0x8,
    Intel = 0x10,
};

