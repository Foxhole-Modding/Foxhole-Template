#pragma once
#include "CoreMinimal.h"
#include "LocationSkeletalMeshStop.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FLocationSkeletalMeshStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    WAR_API FLocationSkeletalMeshStop();
};

