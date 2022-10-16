#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "PhysicalMaterialResolver.h"
#include "VehiclesRenderInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehiclesRenderInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalMaterialResolver PhysicalMaterialResolver;
    
public:
    AVehiclesRenderInfo();
};

