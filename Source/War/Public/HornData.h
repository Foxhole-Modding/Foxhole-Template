#pragma once
#include "CoreMinimal.h"
#include "HornData.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct WAR_API FHornData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownSeconds;
    
    FHornData();
};

