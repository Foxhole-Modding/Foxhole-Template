#pragma once
#include "CoreMinimal.h"
#include "EMonumentType.generated.h"

UENUM()
enum class EMonumentType : int32 {
    None,
    Bronze,
    Silver,
    Gold,
    Platinum,
    NumMonumentTypes,
};

