#pragma once
#include "CoreMinimal.h"
#include "RailParticleSystem.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FRailParticleSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OriginalYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentYaw;
    
    WAR_API FRailParticleSystem();
};

