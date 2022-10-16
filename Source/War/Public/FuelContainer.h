#pragma once
#include "CoreMinimal.h"
#include "Container.h"
#include "FuelTanker.h"
#include "FuelTankerInfo.h"
#include "FuelContainer.generated.h"

UCLASS(Blueprintable)
class WAR_API AFuelContainer : public AContainer, public IFuelTanker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTankerInfo, meta=(AllowPrivateAccess=true))
    FFuelTankerInfo FuelTankerInfo;
    
public:
    AFuelContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTankerInfo();
    
    
    // Fix for true pure virtual functions not being implemented
};

