#pragma once
#include "CoreMinimal.h"
#include "TechTreeComponentNetworkStatus.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeComponentNetworkStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemUnlockBits;
    
    UPROPERTY(EditAnywhere)
    int32 InfrastructureModCounts[5];
    
    WAR_API FTechTreeComponentNetworkStatus();
};

