#pragma once
#include "CoreMinimal.h"
#include "ESquadRole.generated.h"

UENUM(BlueprintType)
enum class ESquadRole : uint8 {
    Leader,
    Member,
    NotInSquad,
};

