#pragma once
#include "CoreMinimal.h"
#include "WarReplicationGraphNode_AlwaysRelevant_ForConnection.h"
#include "WarReplicationGraphNode_GridSpatialization2D.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWarReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode_GridSpatialization2D {
    GENERATED_BODY()
public:
    UWarReplicationGraphNode_GridSpatialization2D();
};

