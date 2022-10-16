#pragma once
#include "CoreMinimal.h"
#include "WarProjectile.h"
#include "TimedProjectile.generated.h"

UCLASS(Blueprintable)
class WAR_API ATimedProjectile : public AWarProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuseTimer;
    
    ATimedProjectile();
};

