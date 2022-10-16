#pragma once
#include "CoreMinimal.h"
#include "DamageMitigation.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FDamageMitigation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mitigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX;
    
    WAR_API FDamageMitigation();
};

