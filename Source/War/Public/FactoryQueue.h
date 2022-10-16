#pragma once
#include "CoreMinimal.h"
#include "SpecializedFactoryOrder.h"
#include "EFactoryQueueType.h"
#include "FactoryQueue.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FFactoryQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFactoryQueueType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CraftingProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CraftingSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSpecializedFactoryOrder> Orders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSpecializedFactoryOrder> CompletedOrders;
    
    FFactoryQueue();
};

