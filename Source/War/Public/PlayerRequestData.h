#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "EFactionId.h"
#include "PlayerRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId RegionId;
    
    UPROPERTY(EditAnywhere)
    uint8 Extras;
    
    WAR_API FPlayerRequestData();
};

