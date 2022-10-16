#pragma once
#include "CoreMinimal.h"
#include "ModBanRequest.h"
#include "PlayerModBannedMessage.generated.h"

USTRUCT(BlueprintType)
struct FPlayerModBannedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModBanRequest ModBanRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSenderServer;
    
    WAR_API FPlayerModBannedMessage();
};

