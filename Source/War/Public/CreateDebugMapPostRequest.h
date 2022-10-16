#pragma once
#include "CoreMinimal.h"
#include "MapPost.h"
#include "CreateDebugMapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FCreateDebugMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPost NewMapPost;
    
    WAR_API FCreateDebugMapPostRequest();
};

