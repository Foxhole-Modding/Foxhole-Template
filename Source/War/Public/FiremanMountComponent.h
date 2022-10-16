#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "MountComponent.h"
#include "FiremanMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFiremanMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CoalPerBoost;
    
public:
    UFiremanMountComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBoost(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastBoostFX();
    
};

