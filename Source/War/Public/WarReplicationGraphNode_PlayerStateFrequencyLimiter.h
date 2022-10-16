#pragma once
#include "CoreMinimal.h"
#include "WarReplicationGraphNode_AlwaysRelevant_ForConnection.h"
#include "WarReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWarReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UWarReplicationGraphNode_PlayerStateFrequencyLimiter();
};

