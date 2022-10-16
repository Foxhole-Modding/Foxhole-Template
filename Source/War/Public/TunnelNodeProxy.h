#pragma once
#include "CoreMinimal.h"
#include "TunnelNode.h"
#include "TunnelNodeProxy.generated.h"

UCLASS(Blueprintable)
class WAR_API ATunnelNodeProxy : public ATunnelNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ProxyConnectionRange;
    
public:
    ATunnelNodeProxy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

