#pragma once
#include "CoreMinimal.h"
#include "EBuildResponse.h"
#include "BuildResponse.generated.h"

class AStructure;

USTRUCT(BlueprintType)
struct FBuildResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildResponse Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStructure* Structure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    WAR_API FBuildResponse();
};

