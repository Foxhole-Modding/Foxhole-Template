#pragma once
#include "CoreMinimal.h"
#include "EFactoryOrderAccess.generated.h"

UENUM(BlueprintType)
enum class EFactoryOrderAccess : uint8 {
    Personal,
    Squad,
    Public,
    Count,
};

