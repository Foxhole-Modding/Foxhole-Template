#pragma once
#include "CoreMinimal.h"
#include "WarProjectile.h"
#include "StickyBombProjectile.generated.h"

class USkeletalMeshComponent;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API AStickyBombProjectile : public AWarProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BombMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AttachCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonationDelay;
    
public:
    AStickyBombProjectile();
protected:
    UFUNCTION(BlueprintCallable)
    void CallDetonateWithLastHitResult();
    
};

