#pragma once
#include "CoreMinimal.h"
#include "DisbandRegimentMessage.generated.h"

USTRUCT(BlueprintType)
struct FDisbandRegimentMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    WAR_API FDisbandRegimentMessage();
};

