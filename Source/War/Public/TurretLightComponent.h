#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TurretLightComponent.generated.h"

class ULightComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTurretLightComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RotatedSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULightComponentBase* LightComponent;
    
public:
    UTurretLightComponent();
};

