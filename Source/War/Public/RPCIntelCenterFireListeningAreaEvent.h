#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFactionId.h"
#include "RPCIntelCenterFireListeningAreaEvent.generated.h"

USTRUCT(BlueprintType)
struct FRPCIntelCenterFireListeningAreaEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    WAR_API FRPCIntelCenterFireListeningAreaEvent();
};

