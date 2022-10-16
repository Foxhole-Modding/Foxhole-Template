#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkySphere.generated.h"

UCLASS(Blueprintable)
class WAR_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    ASkySphere();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateSunDirection();
    
};

