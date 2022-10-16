#pragma once
#include "CoreMinimal.h"
#include "SpectateTarget.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FSpectateTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    WAR_API FSpectateTarget();
};

