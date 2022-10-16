#pragma once
#include "CoreMinimal.h"
#include "StaticBase.h"
#include "HomeRegionBase.generated.h"

UCLASS(Blueprintable)
class WAR_API AHomeRegionBase : public AStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPriority;
    
public:
    AHomeRegionBase();
};

