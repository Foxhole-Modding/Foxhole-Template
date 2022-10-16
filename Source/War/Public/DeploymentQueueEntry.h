#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "EWorldConquestMapId.h"
#include "DeploymentQueueEntry.generated.h"

class AWarPlayerController;

USTRUCT(BlueprintType)
struct FDeploymentQueueEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWarPlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId TargetMapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoint TravelPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecovery;
    
    WAR_API FDeploymentQueueEntry();
};

