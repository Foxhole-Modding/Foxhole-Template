#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MuzzleOffsetVector_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FMuzzleOffsetVector_NetQuantize : public FVector {
    GENERATED_BODY()
public:
    WAR_API FMuzzleOffsetVector_NetQuantize();
};

