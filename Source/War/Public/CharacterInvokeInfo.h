#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MuzzleOffsetVector_NetQuantize.h"
#include "CharacterInvokeInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInvokeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ImpactPoint;
    
    UPROPERTY(EditAnywhere)
    uint32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMuzzleOffsetVector_NetQuantize MuzzleOffset;
    
    WAR_API FCharacterInvokeInfo();
};

