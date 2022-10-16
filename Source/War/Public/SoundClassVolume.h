#pragma once
#include "CoreMinimal.h"
#include "SoundClassVolume.generated.h"

USTRUCT(BlueprintType)
struct FSoundClassVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    WAR_API FSoundClassVolume();
};

