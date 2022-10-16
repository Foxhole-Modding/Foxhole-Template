#pragma once
#include "CoreMinimal.h"
#include "DeviceIdBanRequest.h"
#include "DeviceIdBannedMessage.generated.h"

USTRUCT(BlueprintType)
struct FDeviceIdBannedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceIdBanRequest DeviceIdBanRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSenderServer;
    
    WAR_API FDeviceIdBannedMessage();
};

