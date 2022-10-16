#pragma once
#include "CoreMinimal.h"
#include "RWDSimVehicle.h"
#include "FuelTanker.h"
#include "FuelTankerInfo.h"
#include "OilTanker.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AOilTanker : public ARWDSimVehicle, public IFuelTanker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTankerInfo, meta=(AllowPrivateAccess=true))
    FFuelTankerInfo FuelTankerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* WorkVolume;
    
public:
    AOilTanker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTankerInfo();
    
    
    // Fix for true pure virtual functions not being implemented
};

