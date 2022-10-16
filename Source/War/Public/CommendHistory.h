#pragma once
#include "CoreMinimal.h"
#include "CommendHistory.generated.h"

USTRUCT(BlueprintType)
struct FCommendHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommendedPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCommends;
    
    UPROPERTY(EditAnywhere)
    int64 LastCommendUnixTimestamp;
    
    WAR_API FCommendHistory();
};

