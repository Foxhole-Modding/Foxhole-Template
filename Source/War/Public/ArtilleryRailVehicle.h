#pragma once
#include "CoreMinimal.h"
#include "InfantryRailVehicle.h"
#include "LongRangeArtillerySupport.h"
#include "ArtilleryRailVehicle.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API AArtilleryRailVehicle : public AInfantryRailVehicle, public ILongRangeArtillerySupport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FireShellParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EjectShellParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelPowerForRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelPowerForFiring;
    
    AArtilleryRailVehicle();
    
    // Fix for true pure virtual functions not being implemented
};

