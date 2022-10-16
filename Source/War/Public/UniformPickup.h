#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "EUniformType.h"
#include "UniformPickup.generated.h"

UCLASS(Blueprintable)
class WAR_API AUniformPickup : public AItemPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUniformType UniformType;
    
    AUniformPickup();
};

