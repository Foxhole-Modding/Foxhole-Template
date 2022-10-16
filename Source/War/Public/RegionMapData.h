#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "MapTextItem.h"
#include "MapItem.h"
#include "RegionMapData.generated.h"

USTRUCT(BlueprintType)
struct FRegionMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId RegionId;
    
    UPROPERTY(EditAnywhere)
    int8 ScorchedVictoryTowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapItem> MapItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTextItem> TextItems;
    
    WAR_API FRegionMapData();
};

