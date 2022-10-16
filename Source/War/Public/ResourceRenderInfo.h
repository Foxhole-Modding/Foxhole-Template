#pragma once
#include "CoreMinimal.h"
#include "ResourceRenderInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FResourceRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    WAR_API FResourceRenderInfo();
};

