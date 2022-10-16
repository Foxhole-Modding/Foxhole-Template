#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ListeningAreaDebugData.generated.h"

USTRUCT(BlueprintType)
struct FListeningAreaDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    WAR_API FListeningAreaDebugData();
};

