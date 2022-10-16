#pragma once
#include "CoreMinimal.h"
#include "EChatLanguage.h"
#include "AnalyticsWhisperInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsWhisperInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatLanguage ChatLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    WAR_API FAnalyticsWhisperInfo();
};

