#pragma once
#include "CoreMinimal.h"
#include "SpectateTarget.h"
#include "Camera/PlayerCameraManager.h"
#include "SimPlayerCameraManager.generated.h"

class UMaterialInstanceDynamic;
class UPostProcessComponent;

UCLASS(Blueprintable, NonTransient)
class WAR_API ASimPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogMaterialDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectateTarget SpectateTarget;
    
public:
    ASimPlayerCameraManager();
};

