#pragma once
#include "CoreMinimal.h"
#include "FriendlyFireStats.h"
#include "AnalyticsPlayerRestrictedInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsPlayerRestrictedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFriendlyFireStats FriendlyFireStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RestrictionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationMins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRestrictedByAdmin;
    
    WAR_API FAnalyticsPlayerRestrictedInfo();
};

