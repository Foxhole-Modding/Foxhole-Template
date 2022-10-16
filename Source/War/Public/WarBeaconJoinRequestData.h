#pragma once
#include "CoreMinimal.h"
#include "EServerTravelOriginType.h"
#include "EQueueType.h"
#include "SpawnPoint.h"
#include "WarBeaconJoinRequestData.generated.h"

USTRUCT(BlueprintType)
struct FWarBeaconJoinRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ClientVersion;
    
    UPROPERTY(EditAnywhere)
    uint8 TeamId;
    
    UPROPERTY(EditAnywhere)
    EServerTravelOriginType ServerTravelOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeSelfServeFactionUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQueueType QueueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAtOfflineCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoint TravelPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    WAR_API FWarBeaconJoinRequestData();
};

