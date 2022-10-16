#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "FlameActor.generated.h"

UCLASS(Blueprintable)
class WAR_API AFlameActor : public AActor {
    GENERATED_BODY()
public:
    AFlameActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateSpreadDirection(FVector Direction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnFireIntensityChanged(uint8 Previous, uint8 NewIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPDeactivate();
    
};

