#pragma once
#include "CoreMinimal.h"
#include "MapIntelUpdate.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 MapId;
    
    UPROPERTY(EditAnywhere)
    TArray<int64> PackedColonialIntelItems;
    
    UPROPERTY(EditAnywhere)
    TArray<int64> PackedWardenIntelItems;
    
    WAR_API FMapIntelUpdate();
};

