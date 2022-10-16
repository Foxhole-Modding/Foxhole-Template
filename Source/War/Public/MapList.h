#pragma once
#include "CoreMinimal.h"
#include "MapData.h"
#include "GameFramework/Info.h"
#include "MapList.generated.h"

UCLASS(Blueprintable)
class WAR_API AMapList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMapData> MapDatabase;
    
public:
    AMapList();
};

