#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "SpawnPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 SpawnPointType;
    
public:
    UPROPERTY(EditAnywhere)
    uint16 SpawnSupplies;
    
    WAR_API FSpawnPointInfo();
};

