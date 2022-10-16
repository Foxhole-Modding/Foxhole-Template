#pragma once
#include "CoreMinimal.h"
#include "EWarAchievementType.generated.h"

UENUM(BlueprintType)
enum class EWarAchievementType : uint8 {
    MajorOffensive,
    Offensive,
    Fortified,
    HoldTheLine,
    LastStand,
    Rebellion,
    TurningPoint,
    Liberation,
    SpecialOperation,
    Count,
};

