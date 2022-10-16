#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WarReplicationGraphActorDebugInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWarReplicationGraphActorDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionCullDistance;
    
    WAR_API FWarReplicationGraphActorDebugInfo();
};

