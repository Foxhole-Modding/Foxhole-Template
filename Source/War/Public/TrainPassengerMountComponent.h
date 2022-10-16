#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "TrainPassengerMountComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTrainPassengerMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UTrainPassengerMountComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItems(AActor* TargetActor);
    
};

