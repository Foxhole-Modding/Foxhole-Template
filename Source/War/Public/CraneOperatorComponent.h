#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "CraneOperatorInterface.h"
#include "EShippableStatus.h"
#include "Engine/NetSerialization.h"
#include "CraneOperatorComponent.generated.h"

class ASimVehicle;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UCraneOperatorComponent : public UMountComponent, public ICraneOperatorInterface {
    GENERATED_BODY()
public:
    UCraneOperatorComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateHookRotation(const float HookRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferShippableTo(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleDeployment();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsScoping(const bool bIsScoping);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpShippableFrom(ASimVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpShippable(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropShippable();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowShippableStatus(const EShippableStatus Status);
    
    
    // Fix for true pure virtual functions not being implemented
};

