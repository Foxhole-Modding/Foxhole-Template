#pragma once
#include "CoreMinimal.h"
#include "FacilityRefinery.h"
#include "DecayInfo.h"
#include "FacilitySupplyStation.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFacilitySupplyStation : public AFacilityRefinery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDecayInfo DecayInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyRange;
    
public:
    AFacilitySupplyStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

