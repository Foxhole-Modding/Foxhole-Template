#pragma once
#include "CoreMinimal.h"
#include "MapIntelList.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 MapId;
    
    UPROPERTY(EditAnywhere)
    TArray<int64> PackedIntelItems;
    
    WAR_API FMapIntelList();
};

