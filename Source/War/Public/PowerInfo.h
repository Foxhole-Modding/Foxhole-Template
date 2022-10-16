#pragma once
#include "CoreMinimal.h"
#include "PowerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPowerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PowerDelta;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    int16 PowerLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPower;
    
    WAR_API FPowerInfo();
};

