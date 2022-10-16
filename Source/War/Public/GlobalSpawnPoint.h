#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "UObject/NoExportTypes.h"
#include "EWorldConquestMapId.h"
#include "GlobalSpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FGlobalSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoint Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    WAR_API FGlobalSpawnPoint();
};

