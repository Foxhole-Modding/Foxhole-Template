#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RocketImpactEffect.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class WAR_API ARocketImpactEffect : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    ARocketImpactEffect();
};

