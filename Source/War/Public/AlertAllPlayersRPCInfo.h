#pragma once
#include "CoreMinimal.h"
#include "AlertAllPlayersRPCInfo.generated.h"

USTRUCT(BlueprintType)
struct FAlertAllPlayersRPCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AlertText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration_Sec;
    
    WAR_API FAlertAllPlayersRPCInfo();
};

