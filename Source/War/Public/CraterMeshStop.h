#pragma once
#include "CoreMinimal.h"
#include "CraterMeshStop.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FCraterMeshStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    WAR_API FCraterMeshStop();
};

