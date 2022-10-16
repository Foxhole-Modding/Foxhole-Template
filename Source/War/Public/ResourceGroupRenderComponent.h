#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ResourceRenderInfo.h"
#include "ResourceGroupRenderComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UResourceGroupRenderComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FResourceRenderInfo RenderingInfo[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ResourceNodes;
    
public:
    UResourceGroupRenderComponent();
};

