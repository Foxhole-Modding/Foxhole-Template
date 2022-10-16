#pragma once
#include "CoreMinimal.h"
#include "RepRailwayMovement.generated.h"

class ARailwayTrack;
class ARailVehicle;

USTRUCT(BlueprintType)
struct FRepRailwayMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARailwayTrack* FrontTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARailwayTrack* RearTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARailVehicle* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearMomentum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackedPrimaryAlpha;
    
    WAR_API FRepRailwayMovement();
};

