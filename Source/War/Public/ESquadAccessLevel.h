#pragma once
#include "CoreMinimal.h"
#include "ESquadAccessLevel.generated.h"

UENUM(BlueprintType)
enum class ESquadAccessLevel : uint8 {
    Private,
    Public,
};

