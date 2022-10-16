#pragma once
#include "CoreMinimal.h"
#include "Explosive.h"
#include "UObject/NoExportTypes.h"
#include "PersistentActor.h"
#include "Mine.generated.h"

class UPhysicalMaterial;
class ASimVehicle;

UCLASS(Blueprintable)
class WAR_API AMine : public AExplosive, public IPersistentActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> RoadPhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimVehicle* CurrentTarget;
    
public:
    AMine();
    
    // Fix for true pure virtual functions not being implemented
};

