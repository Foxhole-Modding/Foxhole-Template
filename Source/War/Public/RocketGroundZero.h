#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentActor.h"
#include "RocketGroundZero.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class WAR_API ARocketGroundZero : public AActor, public IPersistentActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDuration;
    
public:
    ARocketGroundZero();
    
    // Fix for true pure virtual functions not being implemented
};

