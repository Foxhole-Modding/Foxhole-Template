#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "GameFramework/WorldSettings.h"
#include "WarReplicationGraphActorDebugInfo.h"
#include "UObject/NoExportTypes.h"
#include "WarReplicationGraphDebugActor.generated.h"

UCLASS(Blueprintable, NonTransient)
class AWarReplicationGraphDebugActor : public AReplicationGraphDebugActor {
    GENERATED_BODY()
public:
    AWarReplicationGraphDebugActor();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerViewTargets(float Delay);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerActorInfo(const FString& MatchString);
    
    //UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientViewTargets(const FNetViewer NetViewer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientActorInfo(const TArray<FWarReplicationGraphActorDebugInfo>& DebugInfo, const FVector& ViewLocation);
    
};

