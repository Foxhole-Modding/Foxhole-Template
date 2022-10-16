#pragma once
#include "CoreMinimal.h"
#include "MapElementScale.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FMapElementScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIntel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapText;
    
    FMapElementScale();
};

