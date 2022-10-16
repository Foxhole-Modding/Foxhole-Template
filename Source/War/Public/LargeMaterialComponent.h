#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TaskItemComponent.h"
#include "LargeMaterialComponent.generated.h"

class AImpactEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULargeMaterialComponent : public UTaskItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffect;
    
public:
    ULargeMaterialComponent();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFX();
    
};

