#pragma once
#include "CoreMinimal.h"
#include "GunTurret.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "CoastalGun.generated.h"

UCLASS(Blueprintable)
class WAR_API ACoastalGun : public AGunTurret {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningShotMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningShotRadius;
    
public:
    ACoastalGun();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayImpactAndTargetFX(const FHitResult& HitResult, const FVector WarningShotAimOffset);
    
};

