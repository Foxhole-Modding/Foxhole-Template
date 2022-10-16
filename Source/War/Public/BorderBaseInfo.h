#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "EHexDirection.h"
#include "UObject/NoExportTypes.h"
#include "BorderBaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FBorderBaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId BorderMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHexDirection HexDirection;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 RoadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime NextClaimTime;
    
    WAR_API FBorderBaseInfo();
};

