#pragma once
#include "CoreMinimal.h"
#include "DeployedStructure.h"
#include "TripodMountedStructure.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API ATripodMountedStructure : public ADeployedStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TripodMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GunMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ItemCodeName;
    
public:
    ATripodMountedStructure();
};

