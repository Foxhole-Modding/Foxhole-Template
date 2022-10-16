#pragma once
#include "CoreMinimal.h"
#include "TripodMountedStructure.h"
#include "DeployedListeningKit.generated.h"

class UListeningAreaComponent;

UCLASS(Blueprintable)
class WAR_API ADeployedListeningKit : public ATripodMountedStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UListeningAreaComponent* ListeningAreaComponent;
    
    ADeployedListeningKit();
};

