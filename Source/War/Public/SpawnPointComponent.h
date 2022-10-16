#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointPriority.h"
#include "Components/SceneComponent.h"
#include "SpawnPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USpawnPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointPriority Priority;
    
    USpawnPointComponent();
};

