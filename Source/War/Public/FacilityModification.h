#pragma once
#include "CoreMinimal.h"
#include "MultiConversionInfo.h"
#include "FacilityModification.generated.h"

USTRUCT(BlueprintType)
struct FFacilityModification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiConversionInfo> ConversionEntries;
    
    WAR_API FFacilityModification();
};

