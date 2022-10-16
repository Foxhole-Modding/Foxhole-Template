#pragma once
#include "CoreMinimal.h"
#include "Explosive.h"
#include "StickyBombExplosive.generated.h"

UCLASS(Blueprintable)
class WAR_API AStickyBombExplosive : public AExplosive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalFuseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FuseTime;
    
    AStickyBombExplosive();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

