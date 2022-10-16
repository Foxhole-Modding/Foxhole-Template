#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFactionId.h"
#include "ELongRangeArtilleryType.h"
#include "RPCLRAFireShellEvent.generated.h"

USTRUCT(BlueprintType)
struct FRPCLRAFireShellEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELongRangeArtilleryType ArtilleryType;
    
    WAR_API FRPCLRAFireShellEvent();
};

