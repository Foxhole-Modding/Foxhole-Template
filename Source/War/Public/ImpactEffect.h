#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImpactEffectOverride.h"
#include "DecalData.h"
#include "HitNotify.h"
#include "ImpactEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AImpactEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactEffectOverride> EffectOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData FleshBloodSplatterDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitNotify HitNotify;
    
    AImpactEffect();
};

