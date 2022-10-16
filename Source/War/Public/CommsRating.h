#pragma once
#include "CoreMinimal.h"
#include "ECommsRatingCondition.h"
#include "CommsRating.generated.h"

USTRUCT(BlueprintType)
struct FCommsRating {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommsRatingCondition Condition;
    
public:
    WAR_API FCommsRating();
};

