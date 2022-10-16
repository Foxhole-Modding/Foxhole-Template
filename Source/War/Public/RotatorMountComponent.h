#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "RotatorMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URotatorMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersRequiredToRotate;
    
public:
    URotatorMountComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnMoveRight(float Val);
    
};

