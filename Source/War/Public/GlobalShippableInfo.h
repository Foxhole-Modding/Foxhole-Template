#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ShippableRenderInfo.h"
#include "GlobalShippableInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalShippableInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo SmallSizeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo NormalSizeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo LargeSizeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo ExtraLargeSizeConfig;
    
public:
    AGlobalShippableInfo();
};

