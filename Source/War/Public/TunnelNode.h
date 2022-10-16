#pragma once
#include "CoreMinimal.h"
#include "ETunnelConnectionState.h"
#include "ETunnelNodeType.h"
#include "TeamStructure.h"
#include "UObject/NoExportTypes.h"
#include "TunnelNode.generated.h"

class ATunnelNode;

UCLASS(Blueprintable)
class WAR_API ATunnelNode : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstructionCheckOverrideExtents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETunnelNodeType TunnelNodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ConnectionState, meta=(AllowPrivateAccess=true))
    ETunnelConnectionState ConnectionState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATunnelNode*> ConnectedTunnelNodes;
    
public:
    ATunnelNode();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectionState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPSetTunnelConnectionStateVisuals(const ETunnelConnectionState NewTunnelConnectionState);
    
};

