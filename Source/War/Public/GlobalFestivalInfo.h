#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "FestivalRenderInfo.h"
#include "GlobalFestivalInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalFestivalInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFestivalRenderInfo> RenderInfoMap;
    
public:
    AGlobalFestivalInfo();
};

