#pragma once
#include "CoreMinimal.h"
#include "ESocketDirection.generated.h"

UENUM()
enum class ESocketDirection : int32 {
    None,
    Front,
    Left,
    Back,
    Right,
    FrontLeft,
    FrontRight,
    BackLeft,
    BackRight,
    Rail,
};

