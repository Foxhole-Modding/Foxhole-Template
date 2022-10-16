#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TravelBlockingArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ATravelBlockingArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* TravelBlockingComponent;
    
    ATravelBlockingArea();
};

