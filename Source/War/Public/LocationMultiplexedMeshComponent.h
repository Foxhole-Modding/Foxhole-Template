#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocationMeshStop.h"
#include "LocationSkeletalMeshStop.h"
#include "LocationMultiplexedMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULocationMultiplexedMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationMeshStop> MeshStops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationSkeletalMeshStop> SkeletalMeshStops;
    
public:
    ULocationMultiplexedMeshComponent();
};

