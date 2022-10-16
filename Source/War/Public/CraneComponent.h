#pragma once
#include "CoreMinimal.h"
#include "ECraneState.h"
#include "Components/ActorComponent.h"
#include "CraneComponents.h"
#include "CraneComponentConfig.h"
#include "ReplicatedShippableData.h"
#include "SavedShippableData.h"
#include "Engine/NetSerialization.h"
#include "EShippableStatus.h"
#include "CraneComponent.generated.h"

class UMeshComponent;
class AActor;
class ASimVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UCraneComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraneComponents Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraneComponentConfig Config;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_State)
    TEnumAsByte<ECraneState> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_HorizontalDistanceToTarget, meta=(AllowPrivateAccess=true))
    float HorizontalDistanceToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float CraneHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PulleyLength, meta=(AllowPrivateAccess=true))
    float PulleyLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CabRotationZ, meta=(AllowPrivateAccess=true))
    float CabRotationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float HookRotationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentShippable, meta=(AllowPrivateAccess=true))
    FName CurrentShippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShippableData, meta=(AllowPrivateAccess=true))
    FReplicatedShippableData ShippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RelevantShippable, meta=(AllowPrivateAccess=true))
    AActor* RelevantShippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedShippableData SavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* DynamicMeshComponent;
    
public:
    UCraneComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateHookRotation(const float HookRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferShippableTo(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleDeployment();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsScoping(const bool bInIsScoping);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpShippableFrom(ASimVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpShippable(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropShippable();
    
    UFUNCTION()
    void OnRep_State(const TEnumAsByte<ECraneState> PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShippableData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RelevantShippable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PulleyLength(const float PreviousPulleyLength);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HorizontalDistanceToTarget(const float PreviousHorizontalDistanceToTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentShippable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CabRotationZ(const float PreviousCabRotationZ);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowShippableStatus(const EShippableStatus Status);
    
};

