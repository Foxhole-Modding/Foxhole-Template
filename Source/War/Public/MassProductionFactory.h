#pragma once
#include "CoreMinimal.h"
#include "SpecializedFactory.h"
#include "MassProductionFactory.generated.h"

class UCraneSpawnLocationComponent;
class USceneComponent;
class UBoxComponent;
class USoundCue;
class UParticleSystem;

UCLASS(Blueprintable)
class WAR_API AMassProductionFactory : public ASpecializedFactory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* TransferLocationFootprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShippableCrateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShippableCratePS;
    
public:
    AMassProductionFactory();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayShippableCrateFX();
    
};

