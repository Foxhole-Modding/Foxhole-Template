#pragma once
#include "CoreMinimal.h"
#include "ETownHallState.h"
#include "Vector2D_NetQuantize.h"
#include "TownHallInfo.generated.h"

USTRUCT(BlueprintType)
struct FTownHallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETownHallState TownHallState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D_NetQuantize Location;
    
    WAR_API FTownHallInfo();
};

