#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPlacementStatus.h"
#include "NoBuildArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ANoBuildArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* NoBuildComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlacementStatus PlacementStatus;
    
    ANoBuildArea();
};

