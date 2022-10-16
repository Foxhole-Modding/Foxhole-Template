#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WindowMeshes.h"
#include "WindowMeshSet.generated.h"

UCLASS(Blueprintable)
class WAR_API UWindowMeshSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowMeshes T1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowMeshes T2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowMeshes T3;
    
    UWindowMeshSet();
};

