#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapBoundary.generated.h"

class UArrowComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AMapBoundary : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* MarkerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* NoBuildArea;
    
public:
    AMapBoundary();
};

