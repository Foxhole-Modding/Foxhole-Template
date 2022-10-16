#pragma once
#include "CoreMinimal.h"
#include "LocationMeshStop.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FLocationMeshStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    WAR_API FLocationMeshStop();
};

