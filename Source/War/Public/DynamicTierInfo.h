#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DynamicTierInfo.generated.h"

class UWindowMeshSet;

USTRUCT(BlueprintType)
struct WAR_API FDynamicTierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowMeshSet> WindowMeshSet;
    
    FDynamicTierInfo();
};

