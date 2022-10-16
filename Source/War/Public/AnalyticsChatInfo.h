#pragma once
#include "CoreMinimal.h"
#include "EChatChannel.h"
#include "EChatLanguage.h"
#include "AnalyticsChatInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsChatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatChannel ChatChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatLanguage ChatLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    WAR_API FAnalyticsChatInfo();
};

