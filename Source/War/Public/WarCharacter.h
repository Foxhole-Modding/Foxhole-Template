#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"
#include "EncumbranceManager.h"
#include "Engine/NetSerialization.h"
#include "WarCharacter.generated.h"

class AFlareExplosionEffect;
class ACalloutMarkerGhost;
class APawn;
class UStealthComponent;
class AStructure;

UCLASS(Blueprintable)
class WAR_API AWarCharacter : public ACharacter, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewRadiusDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Temperature;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Temperature)
    uint8 ReplicatedTemperature;
    
protected:
    UPROPERTY(EditAnywhere, Replicated)
    uint8 PlayerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncumbranceManager EncumbranceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStealthComponent* StealthComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACalloutMarkerGhost* CalloutMarkerBeingPlaced;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AFlareExplosionEffect>> NearbyFlares;
    
public:
    AWarCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseStructure(AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnstuck();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaceCalloutMarker(const FVector_NetQuantize& DestinationPosition);
    
public:
    UFUNCTION()
    void OnRep_Temperature(const uint8 PreviousTemperature);
    
private:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlaceCalloutMarker(const int8 TeamId, const FVector_NetQuantize& DestinationPosition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnVisible(const APawn* TargetPawn) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

