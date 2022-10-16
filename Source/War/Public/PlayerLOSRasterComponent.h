#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PlayerLOSRasterComponent.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPlayerLOSRasterComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CharacterOutlineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VisibilityIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VisibilityIndicatorMaterialDynamic;
    
public:
    UPlayerLOSRasterComponent();
};

