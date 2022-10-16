#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "WarReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

struct FAlwaysRelevantActorInfo;
class AActor;

UCLASS(Blueprintable, NonTransient)
class UWarReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastMovementBaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastMountedStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastMountedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastVehicleBaseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastBaseBaseActor;
    
public:
    UWarReplicationGraphNode_AlwaysRelevant_ForConnection();
};

