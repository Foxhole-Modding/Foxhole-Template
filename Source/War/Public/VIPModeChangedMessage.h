#pragma once
#include "CoreMinimal.h"
#include "VIPModeChangedMessage.generated.h"

USTRUCT(BlueprintType)
struct FVIPModeChangedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVIPMode;
    
    WAR_API FVIPModeChangedMessage();
};

