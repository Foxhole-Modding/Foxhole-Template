#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentSFX.generated.h"

class UArrowComponent;
class UAudioComponent;

UCLASS(Blueprintable)
class WAR_API AEnvironmentSFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* DayTimeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* NightTimeSFX;
    
    AEnvironmentSFX();
};

