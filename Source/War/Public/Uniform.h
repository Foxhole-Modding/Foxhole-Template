#pragma once
#include "CoreMinimal.h"
#include "DamageMitigation.h"
#include "EDamageType.h"
#include "Uniform.generated.h"

USTRUCT(BlueprintType)
struct FUniform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemHolderCapacity;
    
    UPROPERTY(EditAnywhere)
    uint32 StackFilter;
    
    UPROPERTY(EditAnywhere)
    int8 StackSize;
    
    UPROPERTY(EditAnywhere)
    uint32 EncumbranceFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncumbranceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnowStormMitigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RainStormMitigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageType, FDamageMitigation> DamageMitigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRegimentFriendlyFire;
    
    WAR_API FUniform();
};

