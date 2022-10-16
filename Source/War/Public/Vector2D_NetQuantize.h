#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Vector2D_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FVector2D_NetQuantize : public FVector {
    GENERATED_BODY()
public:
    WAR_API FVector2D_NetQuantize();
};

