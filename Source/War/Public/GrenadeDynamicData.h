#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GrenadeDynamicData.generated.h"

USTRUCT(BlueprintType)
struct FGrenadeDynamicData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTossSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTossSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeFuseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeRangeLimit;
    
    WAR_API FGrenadeDynamicData();
};

