#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "IntelCenterMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UIntelCenterMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UIntelCenterMountComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredPitch(const float Pitch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireListeningArea();
    
};

