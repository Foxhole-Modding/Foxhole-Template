#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlameImpactFXInfo.generated.h"

USTRUCT(BlueprintType)
struct FFlameImpactFXInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    WAR_API FFlameImpactFXInfo();
};

