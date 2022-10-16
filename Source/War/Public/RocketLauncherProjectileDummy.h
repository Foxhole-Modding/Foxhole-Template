#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RocketLauncherProjectileDummy.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API ARocketLauncherProjectileDummy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    ARocketLauncherProjectileDummy();
    UFUNCTION(BlueprintCallable)
    void SpoolupFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPBeginLaunch();
    
};

