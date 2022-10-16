#pragma once
#include "CoreMinimal.h"
#include "ERegimentRole.generated.h"

UENUM()
enum class ERegimentRole : int8 {
    Commander,
    Officer,
    Member,
};

