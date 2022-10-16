#pragma once
#include "CoreMinimal.h"
#include "WarGridCoordinate.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "Engine/NetSerialization.h"
#include "RPCRocketPreLaunchAlert.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketPreLaunchAlert {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(EditAnywhere)
    uint8 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate Coordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize StrikeLocation;
    
    WAR_API FRPCRocketPreLaunchAlert();
};

