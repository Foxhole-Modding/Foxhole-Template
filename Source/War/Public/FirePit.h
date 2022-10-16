#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "FuelTank.h"
#include "FirePit.generated.h"

class UTemperatureModifierSphereComponent;
class UStaticMeshComponent;
class UParticleSystemComponent;
class UAudioComponent;

UCLASS(Blueprintable)
class WAR_API AFirePit : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTemperatureModifierSphereComponent* TemperatureModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FireMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Fire1ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Fire2ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Fire3ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTankDiesel, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTankDiesel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DieselConsumptionRate;
    
public:
    AFirePit();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTankDiesel();
    
};

