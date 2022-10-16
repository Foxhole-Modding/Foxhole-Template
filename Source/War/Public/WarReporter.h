#pragma once
#include "CoreMinimal.h"
#include "WarReporter.generated.h"

USTRUCT(BlueprintType)
struct FWarReporter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlineIDListOfAllPlayersJoined;
    
public:
    WAR_API FWarReporter();
};

