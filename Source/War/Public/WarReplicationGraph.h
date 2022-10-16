#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "WarReplicationGraph.generated.h"

class UWarReplicationGraphNode_GridSpatialization2D;
class UReplicationGraphNode_ActorList;
class UWarReplicationGraphNode_RailVehicleNode;

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> NonSpatializedChildClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarReplicationGraphNode_RailVehicleNode* RailVehicleNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UWarReplicationGraph();
};

