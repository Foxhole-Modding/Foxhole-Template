#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EMapTeamId.h"
#include "ListeningAreaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UListeningAreaComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ListeningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMapTeamId TeamId;
    
public:
    UListeningAreaComponent();
};

