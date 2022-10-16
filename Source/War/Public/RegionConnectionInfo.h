#pragma once
#include "CoreMinimal.h"
#include "RegionConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FRegionConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapCodename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(EditAnywhere)
    int8 serverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString steamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ipAddress;
    
    UPROPERTY(EditAnywhere)
    uint16 Port;
    
    UPROPERTY(EditAnywhere)
    uint16 PortBeacon;
    
    UPROPERTY(EditAnywhere)
    uint64 packedWarStatus;
    
    UPROPERTY(EditAnywhere)
    uint64 packedServerState;
    
    UPROPERTY(EditAnywhere)
    int16 colonialQueueSize;
    
    UPROPERTY(EditAnywhere)
    int16 wardenQueueSize;
    
    UPROPERTY(EditAnywhere)
    int16 ColonialOpenSlots;
    
    UPROPERTY(EditAnywhere)
    int16 WardenOpenSlots;
    
    WAR_API FRegionConnectionInfo();
};

