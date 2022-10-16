#pragma once
#include "CoreMinimal.h"
#include "MapPost.h"
#include "CreateMapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FCreateMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPost NewMapPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModModeOn;
    
    WAR_API FCreateMapPostRequest();
};

