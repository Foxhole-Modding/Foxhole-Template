#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "SpawnPoints.generated.h"

class USpawnPointComponent;

USTRUCT(BlueprintType)
struct FSpawnPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoint SpawnPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USpawnPointComponent*> HighPrioritySpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USpawnPointComponent*> LowPrioritySpawn;
    
    WAR_API FSpawnPoints();
};

