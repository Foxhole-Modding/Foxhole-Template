#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ProjectileHitInfo_NetQuantize.generated.h"

class AActor;
class UPrimitiveComponent;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FProjectileHitInfo_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ImpactNormal;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
    
    WAR_API FProjectileHitInfo_NetQuantize();
};

