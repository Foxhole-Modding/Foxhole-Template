#pragma once
#include "CoreMinimal.h"
#include "MapPostMember.generated.h"

USTRUCT(BlueprintType)
struct FMapPostMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    WAR_API FMapPostMember();
};

