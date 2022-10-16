#pragma once
#include "CoreMinimal.h"
#include "MeshStop.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    WAR_API FMeshStop();
};

