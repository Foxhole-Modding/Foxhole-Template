#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMapExtentMarkerLocation.h"
#include "MapExtentMarker.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AMapExtentMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapExtentMarkerLocation Location;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MarkerScene;
    
public:
    AMapExtentMarker();
};

