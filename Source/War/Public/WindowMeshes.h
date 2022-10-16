#pragma once
#include "CoreMinimal.h"
#include "WindowMeshes.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct WAR_API FWindowMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Colonial[3];
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* Warden[3];
    
    FWindowMeshes();
};

