#pragma once
#include "CoreMinimal.h"
#include "MapSnapshotDatum.generated.h"

USTRUCT(BlueprintType)
struct FMapSnapshotDatum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 IntelCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequesterScouted;
    
    WAR_API FMapSnapshotDatum();
};

