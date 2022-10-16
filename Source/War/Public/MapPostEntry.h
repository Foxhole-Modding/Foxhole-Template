#pragma once
#include "CoreMinimal.h"
#include "MapPostMember.h"
#include "MapPostEntry.generated.h"

USTRUCT(BlueprintType)
struct FMapPostEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPostMember Member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(EditAnywhere)
    int64 UnixTimeStamp;
    
    WAR_API FMapPostEntry();
};

