#pragma once
#include "CoreMinimal.h"
#include "QueuedPlayer.h"
#include "WarServerQueue.generated.h"

USTRUCT(BlueprintType)
struct FWarServerQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedPlayer> RegularQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedPlayer> PrioritizedQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedPlayer> ModQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedPlayer> ReservedList;
    
    WAR_API FWarServerQueue();
};

