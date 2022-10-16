#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.h"
#include "GameFramework/Actor.h"
#include "EMapTeamId.h"
#include "MapIcon.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AMapIcon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTeamId MapTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType MapIconType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
public:
    AMapIcon();
};

