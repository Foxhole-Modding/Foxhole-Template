#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshStop.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSkeletalMeshStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    WAR_API FSkeletalMeshStop();
};

