#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CalloutMarkerGhost.generated.h"

class ASimPlayerController;

UCLASS(Blueprintable)
class WAR_API ACalloutMarkerGhost : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimPlayerController* Controller;
    
public:
    ACalloutMarkerGhost();
};

