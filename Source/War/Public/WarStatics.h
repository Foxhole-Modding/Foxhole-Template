#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WarStatics.generated.h"

UCLASS(Blueprintable)
class WAR_API UWarStatics : public UObject {
    GENERATED_BODY()
public:
    UWarStatics();
    UFUNCTION(BlueprintCallable)
    static bool IsNight(const UObject* WorldContextObject);
    
};

