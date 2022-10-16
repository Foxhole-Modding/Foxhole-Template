#pragma once
#include "CoreMinimal.h"
#include "NewsItemInfo.generated.h"

class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FNewsItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* ImageTexture;
    
    WAR_API FNewsItemInfo();
};

