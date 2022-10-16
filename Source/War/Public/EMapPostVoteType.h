#pragma once
#include "CoreMinimal.h"
#include "EMapPostVoteType.generated.h"

UENUM()
enum class EMapPostVoteType : int8 {
    None,
    Up,
    Down,
};

