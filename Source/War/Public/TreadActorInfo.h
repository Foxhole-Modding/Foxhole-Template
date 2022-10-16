#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TreadActorInfo.generated.h"

class UPhysicalMaterial;
class ADecalActor;

USTRUCT(BlueprintType)
struct FTreadActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADecalActor> TreadActor;
    
    WAR_API FTreadActorInfo();
};

