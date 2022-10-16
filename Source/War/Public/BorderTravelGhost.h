#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BorderTravelGhost.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ABorderTravelGhost : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
public:
    ABorderTravelGhost();
};

