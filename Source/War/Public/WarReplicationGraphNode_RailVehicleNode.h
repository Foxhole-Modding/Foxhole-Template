#pragma once
#include "CoreMinimal.h"
#include "TrainRepInfo.h"
#include "WarReplicationGraphNode_AlwaysRelevant_ForConnection.h"
#include "WarReplicationGraphNode_RailVehicleNode.generated.h"

class ARailVehicle;

UCLASS(Blueprintable, NonTransient)
class UWarReplicationGraphNode_RailVehicleNode : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ARailVehicle*, FTrainRepInfo> Trains;
    
    UWarReplicationGraphNode_RailVehicleNode();
};

